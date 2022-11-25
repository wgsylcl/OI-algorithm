#include<iostream>
#include<cstdio>
using namespace std;
int book[20],n,a[20];
void dfs(int step)
{
	if(step==n)
	{
		for(int i=0;i<n;i++)
		{
			cout<<a[i]; 
		}
		cout<<endl;
		return;
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
	freopen("std.in","r",stdin);
	freopen("std.out","w",stdout);
	cin>>n;
	dfs(0);
	return 0;
}

