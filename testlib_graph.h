#ifndef TESTLIB_GRAPH
#define TESTLIB_GRAPH
#include<bits/stdc++.h>
#include"testlib.h"
using namespace std;
namespace OJ
{
typedef unsigned int uint;
typedef pair<int,int> range;
range default_range(0,0);
uint direct=(1<<1);
uint loop=(1<<2);
uint weight=(1<<3);
uint cost=(1<<4);
uint unicom=(1<<5);
uint double_edge=(1<<6);
uint self_loop=(1<<7)|loop;
static bool wall=true;
bool have(uint a,uint b){ return a & b ; }
void printerror(string formot)
{
    cerr<<formot<<endl;
    return;
}
class dsu
{
    vector<int> f;
    int size;
    public:
    dsu(int size=100000):size(size)
    {
        f.resize(size+10);
        for(int i=0;i<=size;i++)
        f[i]=i;
    }
    int find(int x)
    { return x != f[x] ? f[x] = this->find(f[x]) : x; }
    bool insame(int u,int v)
    { return this->find(u) == this->find(v) ; }
    void merge(int u,int v)
    { f[find(v)]=find(u); return; }
};
class graph
{
    struct edge
    {
        int u,v,w,cost;
        edge(int u=0,int v=0,int w=0,int cost=0):u(u),v(v),w(w),cost(cost){}
    };
    vector<edge> TE,E;
    vector<int>head,nex;
    int maxn,maxm,edge_cnt;
    bitset<1000000> book,vis;
    uint mode;
    bool _check_loop(int u,int fa)
    {
        vis[u]=1;
        book[u]=1;
        for(int i=head[u];i;i=nex[i])
        {
            int v=E[i].v;
            if(book[v]==1&&v!=fa) return true;
            else if(v!=fa&&_check_loop(v,u)) return true;
        }
        book[u]=0;
        return false;
    }
    bool have_edge(int u,int v)
    {
        for(int i=head[u];i;i=nex[i])
        if(E[i].v==v) return true;
        return false;
    }
    void _add(int u,int v,int w,int cost)
    {
        edge_cnt++;
        E[edge_cnt]=(edge){u,v,w,cost};
        nex[edge_cnt]=head[u];
        head[u]=edge_cnt;
        return;
    }
    void _del()
    {
        int u=E[edge_cnt].u,v=E[edge_cnt].v;
        head[u]=nex[head[u]];
        edge_cnt--;
        return;
    }
    public:
    graph(int n,int m,uint mode)
    {
		maxn=n,maxm=m,this->mode=mode,edge_cnt=0;
        if(!have(mode,direct))
        maxm<<=1;
        E.resize(maxm+10);
        head.resize(maxn+10,0);
        nex.resize(maxm+10,0);
    }
    bool check_loop()
    {
        vis=0,book=0;
        for(int i=1;i<=maxn;i++)
        if(!vis[i]&&_check_loop(i,0))
        return true; return false;
    }
    bool add(int u,int v,int w=0,int cost=0)
    {
        if(edge_cnt>=maxm||!have(mode,direct)&&edge_cnt+1>=maxm)
        {
            if(wall)
            printerror("GRAPH_ERROR:The number of edge will more than you defined if you add this edge!");
            return false;
        }
        if(u==v&&!have(mode,self_loop))
        {
            if(wall)
            printerror("GRAPH_ERROR:You mustn't add a edge to make a self loop in a graph with no self loop!");
            return false;
        }
        if(!have(mode,double_edge)&&have_edge(u,v))
        {
            if(wall)
            printerror("GRAPH_ERROR:You mustn't add a double edge in a graph with no double edge!");
            return false;
        }
        _add(u,v,w,cost);
        if(!have(mode,loop)&&check_loop())
        {
            _del();
            if(wall)
            printerror("GRAPH_ERROR:You mustn't add a edge to make a loop in a graph with no loop!");
            return false;
        }
        if(!have(mode,direct))
        {
            if(!have(mode,double_edge)&&have_edge(v,u))
            {
                _del();
                if(wall)
                printerror("GRAPH_ERROR:You mustn't add a double edge in a graph with no double edge!");
                return false;
            }
            _add(v,u,w,cost);
            if(!have(mode,loop)&&check_loop())
            {
                _del(),_del();
                if(wall)
                printerror("GRAPH_ERROR:You mustn't add a edge to make a loop in a gragh with no loop!");
                return false;
            }
        }
        TE.push_back(edge(u,v,w,cost));
        return true;
    }
    void display()
    {
        shuffle(TE.begin(),TE.end());
        for(auto& i:TE)
        {
            printf("%d %d",i.u,i.v);
            if(have(mode,weight))
            printf(" %d",i.w);
            if(have(mode,cost))
            printf(" %d",i.cost);
            putchar('\n');
        }
        return;
    }
};
graph make_graph(int n,int m,uint mode,range w=default_range,range cost=default_range)
{
    wall=false;
    if(!have(mode,direct)&&have(mode,unicom)&&!have(mode,loop)&&n!=m+1)
    {
        printerror("GRAPH_ERROR:It is impossible to make a tree with the number of its edge plus one is not same as the number of its node");
        return graph(0,0,0);
    }
    if(!have(mode,double_edge)&&!have(mode,self_loop))
    {
        if(have(mode,direct))
        {
            if((unsigned long long)(m)>((unsigned long long)(n)*(unsigned long long)(n-1)))
            {
                printerror("GRAPH_ERROR:Too much edge to make a graph with no double_edge and no self_loop!");
                return graph(0,0,0);
            }
        }
        else
        {
            if((unsigned long long)(m)>((unsigned long long)(n)*(unsigned long long)(n-1))/2ull)
            {
                printerror("GRAPH_ERROR:Too much edge to make a graph with no double_edge and no self_loop!");
                return graph(0,0,0);
            }
        }
    }
    graph ret(n,m,mode);
    if(have(mode,unicom))
    {
        dsu tmp(n);
        for(int i=1;i<n;i++)
        {
            start:
            int u=rnd.next(1,n);int v=rnd.next(1,n);int _w=rnd.next(w.first,w.second);int _cost=rnd.next(cost.first,cost.second);
            if(tmp.insame(u,v)) goto start;
            if(!ret.add(u,v,_w,_cost)) goto start;
            tmp.merge(u,v);
            m--;
        }
    }
    if(m>0)
    while(m--)
    {
        _start:
        int u=rnd.next(1,n);int v=rnd.next(1,n);int _w=rnd.next(w.first,w.second);int _cost=rnd.next(cost.first,cost.second);
        if(!ret.add(u,v,_w,_cost))
        goto _start;
    }
    wall=true;
    return ret;
}
graph make_chain(int n,uint mode=unicom,range w=default_range,range cost=default_range)
{
    graph ret(n,n-1,mode);
    for(int i=1;i<n;i++)
    ret.add(i,i+1,rnd.next(w.first,w.second),rnd.next(cost.first,cost.second));
    return ret;
}
graph make_flower(int n,int center=1,uint mode=unicom,range w=default_range,range cost=default_range)
{
    graph ret(n,n-1,mode);
    for(int i=1;i<=n;i++) if(i!=center)
    ret.add(i,center,rnd.next(w.first,w.second),rnd.next(cost.first,cost.second));
    return ret;
}
graph make_tree(int n,uint mode=unicom,range w=default_range,range cost=default_range)
{
    return make_graph(n,n-1,mode,w,cost);
}
}
#endif
