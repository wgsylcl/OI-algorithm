#include<iostream>
#include<cstdio>
using namespace std;
typedef long long ll;
void exgcd(ll a,ll b,ll& x,ll& y)
{
	if(!b)
	{
		x=1,y=0;
		return;
	}
	exgcd(b,a%b,x,y);
	ll tx=x;
	x=y;
	y=tx-y*(a/b);
	return;
}
int main()
{
	ll a,b,x,y;
	cin>>a>>b;
	exgcd(a,b,x,y);
	x=(x%b+b)%b;
	cout<<x;
	return 0;
}

