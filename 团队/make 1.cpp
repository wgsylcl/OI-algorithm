#include<bits/stdc++.h>
using namespace std;

int n,ss,tt,f[100005],g[100005];
struct node{
	int s,t;
}a[100005];
struct nodeb{
	int e,num;
}b[100005];
struct nodec{
	int e,num;
}c[100005];
bool cmp(node a,node b)
{
	return a.s<b.s;
}
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
int main()
{
	freopen("airport.in","r",stdin);
	freopen("airport.out","w",stdout);
	//cin>>n>>ss>>tt;
	n=read();
	ss=read();
	tt=read();
	if(n>=ss+tt)
	{
		write(ss+tt);
		//cout<<ss+tt;
		return 0;
	}
	for(int i=1;i<=ss;i++)
	{
		a[i].s=read();
		a[i].t=read();
	}
	sort(a+1,a+1+ss,cmp);
	for(int i=1;i<=ss;i++)
	{
		for(int j=1;j<=ss;j++)
		{
			if(a[i].s>b[j].e)
			{
			