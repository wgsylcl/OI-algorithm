#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;
#include <cmath>
bool zs(int num)
{
    for(int i=2;i<=sqrt(num);i++)
    if(num%i==0)
    return false;
    return true;
}
int main()
{
    int max=0;
    int n,t;
    cin>>n;
    for(int i=2;i<=sqrt(n);i++)
    {
    	if(n%i==0)
    	{
    		if(zs(i)&&i>max)
    		max=i;
    		if(zs(n/i)&&n/i>max)
    		max=n/i;
		}
	}
	cout<<max;
	return 0;
}

