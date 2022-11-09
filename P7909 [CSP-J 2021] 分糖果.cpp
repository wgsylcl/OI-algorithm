#include<iostream>
#include<cstdio>
using namespace std;

int main()
{
	int ans=0,n,l,r;
	cin>>n>>l>>r;
	for(int i=l;i<=l+n&&i<=r;i++)
	{
		ans=max(i%n,ans);
		if(ans==n-1) break;
	}
	cout<<ans;
	return 0;
}

