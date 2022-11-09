#include<iostream>
#include<cstring>
#include<cstdio>
#include<queue>
using namespace std;
inline int read()
{
    int x=0,f=1;
    char ch;
    for(ch=getchar();!isdigit(ch);ch=getchar()) if(ch=='-') f=-1;
    for(;isdigit(ch);ch=getchar())
    {
        x=(x<<3)+(x<<1)+(ch-'0');
    }
    return f*x;
}
inline void write(int x)
{
    if(x<0)
    {
        putchar('-');
        x=-x;
    }
    if(x>9) write(x/10);
    putchar(x%10+'0');
    return;
}
#define maxn 100000
#define maxm 200000
struct edge
{
    int u,v,w;
}E[(maxm+10)<<1];
int dis[maxn+10],head[maxn+10],nex[(maxm<<1)+10],edge_cnt,n,m,s;
bool book[maxn+10];
void add(int u,int v,int w)
{
    edge_cnt++;
    E[edge_cnt]=(edge){u,v,w};
    nex[edge_cnt]=head[u];
    head[u]=edge_cnt;
    return;
}

struct node
{
    int u,dis;
    node(int u,int dis):u(u),dis(dis){} 
};
struct cmp
{
    bool operator()(node n1,node n2)
    {
        return n1.dis>n2.dis;
    }
};
priority_queue<node,vector<node>,cmp> pro;
int main()
{
    n=read(),m=read(),s=read();
    memset(dis,0x3f,sizeof(dis));
    while(m--)
    {
        int u=read(),v=read(),w=read();
        add(u,v,w);
    }
    dis[s]=0;
    pro.push(node(s,0));
    while(!pro.empty())
    {
        node tmp=pro.top();
        int u=tmp.u,d=tmp.dis;
        pro.pop();
        if(d!=dis[u]) continue;
        if(book[u]) continue;
        book[u]=true;
        for(int i=head[u];i;i=nex[i])
        {
            int v=E[i].v,w=E[i].w;
            if(dis[v]>dis[u]+w)
            {
                dis[v]=dis[u]+w;
                if(!book[v])
                pro.push(node(v,dis[v]));
            }
        }
    }
    for(int i=1;i<=n;i++)
    write(dis[i]),putchar(' ');
    return 0;
}
