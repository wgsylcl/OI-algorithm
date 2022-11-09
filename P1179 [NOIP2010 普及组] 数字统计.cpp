#include<iostream>
#include<cstdio>
using namespace std;
int getnum(int x)
{
	int cnt=0;
	while(x>0)
	{
		cnt+=((x%10==2)?1:0);
		x/=10;
	}
	return cnt;
}
int main()
{
	int ans=0,l,r;
	cin>>l>>r;
	for(int i=l;i<=r;i++) ans+=getnum(i);
	cout<<ans;
	return 0;
}

