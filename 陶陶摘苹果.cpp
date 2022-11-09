#include<bits/stdc++.h>
using namespace std;

int main()
{
	long long a[10],h,s=0;
	for(int i=0;i<=9;i++)
	{
		cin>>a[i];
	}
	cin>>h;
	for(int i=0;i<=9;i++)
	{
		if(a[i]<=h+30)
		{
			s++;
		}
	}
	cout<<s;
	return 0;
}

