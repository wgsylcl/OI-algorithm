#include<iostream>
#include<cstdio>
using namespace std;
int a,b,p;
int getpow(int a,int b,int p)
{
	if(b==0) return 1;
	if(b==1) return a%p;
	int t=getpow(a,b/2,p)%p;
	return (t*t*((b&1)?a%p:1))%p;
}
int main()
{
	cin>>a>>b>>p;
	printf("%d^%d mod %d=%d",a,b,p,getpow(a,b,p));
	return 0;
}

