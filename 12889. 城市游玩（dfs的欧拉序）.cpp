#include<iostream>
#include<cstdio>
using namespace std;
int e[1002][1002],n,m,book[1001]={0,1},a,b,sum;
void dfs(int cur)
{
	cout<<cur<<" ";
	for(int i=1;i<=n;i++)
	{
		if(e[cur][i]==1&&book[i]==0)
		{
			book[i]=1;
			dfs(i);
			cout<<cur<<" ";
		}
	}
	return;
}
int main()
{
	cin>>n>>m;
	for(int i=0;i<m;i++)
	{
		cin>>a>>b;
		e[a][b]=1;
		e[b][a]=1;
	}
	dfs(1);
	return 0;
}

