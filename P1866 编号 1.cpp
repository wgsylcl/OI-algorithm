#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;

int main()
{
	long long maxnum[52],n,ans=1;
	cin>>n;
	for(int i=0;i<n;i++) cin>>maxnum[i];
	sort(maxnum,maxnum+n);
	for(int i=0;i<n;i++) ans=(ans*(maxnum[i]-i+1))%1000000007;
	cout<<ans;
	return 0;
}

