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
struct cmp
{
    bool operator()(int a,int b)
    {
        return dis[a]>dis[b];
    }
};
priority_queue<int,vector<int>,cmp> pro;
int main()
{
    n=read(),m=read(),s=read();
    memset(dis,0x3f,sizeof(dis));
    while(m--)
    {
        int u=read(),v=read(),w=read();
        add(u,v,w);
        add(v,u,w);
    }
    
    return 0;
}
