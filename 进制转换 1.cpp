#include<iostream>
#include<cstdio>
using namespace std;
char num[114514]="0123456789ABCDEF";
typedef unsigned long long ll;
void write(ll x,ll base)
{
	if(x==0) return;
	write(x/base,base);
	putchar(num[x%base]);
	return;
}

int main()
{
	ll x;
	cin>>x;
	for(ll i=2;i<=16;i++)
	{
		cout<<"(";
		write(x,i);
		cout<<")"<<i<<"\n";
	}
	return 0;
}

