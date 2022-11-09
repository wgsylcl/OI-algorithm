#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;
bool zs(int a)
{
	if(a==1||a==0) return false;
	for(int i=2;i<=sqrt(a);i++)
	{
		if(a%i==0)
		return false;
	}
	return true;
}
int main()
{
    int a;
    int n;
    cin>>n;
    while(n--)
    {
    	cin>>a;
    	if(zs(a))
    	cout<<a<<' ';
	}
	return 0;
}

