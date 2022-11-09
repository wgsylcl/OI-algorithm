#include<iostream>
#include<cstdio>
using namespace std;
int n,book[1<<16],a[1<<16];
void dfs(int step)
{
	if(step==n)
	{
		for(int i=0;i<n;i++)
		{
			printf("%5d",a[i]);
		}
		puts("");
	}
	for(int i=1;i<=n;i++)
	{
		if(book[i]==0)
		{
			book[i]=1;
			a[step]=i;
			dfs(step+1);
			book[i]=0;
		}
	}
	return;
}
int main()
{
	cin>>n;
	dfs(0);
	return 0;
}

