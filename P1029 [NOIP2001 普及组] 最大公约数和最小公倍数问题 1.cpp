#include<iostream>
#include<cstdio>
#include<cmath>
typedef long long ll;
using namespace std;
ll x,y,t,ans,p;
int main()
{
	cin>>x>>y;
	t=x*y;
	p=sqrt(t);
	for(ll i=1;i<=p;i++)
	{
		if(t%i==0) ans+=2;
	}
	if(p*p==t)ans--;
	cout<<ans;
	return 0;
}
