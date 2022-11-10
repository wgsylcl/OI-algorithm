#include<iostream>
#include<cstdio>
#include<vector>
#include<set>
using namespace std;
#define maxn 500000
#define maxm 2000000
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
struct edge
{
    int u,v;
}E[(maxm+10)<<1];
set<int> bri;
vector<int> sube[maxn+10];
int n,m,low[maxn+10],dfn[maxn+10],inde=1,cnt,head[maxn+10],nex[(maxm+10)<<1],edge_cnt=1;
bool book[maxn+10];
void add(int u,int v)
{
    edge_cnt++;
    E[edge_cnt]=(edge){u,v};
    nex[edge_cnt]=head[u];
    head[u]=edge_cnt;
    return;
}
void tar(int u,int from)
{
    dfn[u]=low[u]=inde++;
    for(int i=head[u];i;i=nex[i])
    {
        int v=E[i].v;
        if(!dfn[v])
        {
            tar(v,i);
            low[u]=min(low[u],low[v]);
            if(low[v]>dfn[u])
            {
                bri.insert(i);
                bri.insert(i^1);
            }
        }
        else if(i!=from&&i!=(from^1))
        low[u]=min(low[u],dfn[v]);
    }
    return;
}
void dfs(int u)
{
    book[u]=true;
    sube[cnt].push_back(u);
    for(int i=head[u];i;i=nex[i])
    {
        int v=E[i].v;
        if(!book[v]&&bri.find(i)==bri.end()) dfs(v);
    }
    return;
}
int main()
{
    n=read(),m=read();
    while(m--)
    {
        int u=read(),v=read();
        if(u==v) continue;
        add(u,v);
        add(v,u);
    }
    for(int i=1;i<=n;i++) if(!dfn[i]) tar(i,0);
    for(int i=1;i<=n;i++)
    {
        if(!book[i])
        {
            cnt++;
            dfs(i);
        }
    }
    write(cnt);
    puts("");
    for(int i=1;i<=cnt;i++)
    {
        write(sube[i].size()),putchar(' ');
        for(auto it=sube[i].begin();it!=sube[i].end();it++)
        write(*it),putchar(' ');
        puts("");
    }
    return 0;
}
