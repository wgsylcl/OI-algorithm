#include<iostream>
#include<cstdio>
using namespace std;

int main()
{
	int w[35],dp[300010],n,v;
	cin>>v>>n;
	for(int i=1;i<=n;i++) cin>>w[i];
	for(int i=1;i<=n;i++)
	{
		for(int j=v;j>=w[i];j--)
		{
			dp[j]=max(dp[j],dp[j-w[i]]+w[i]);
		}
	}
	cout<<v-dp[v];
	return 0;
}

