#include<iostream>
#include<cstdio>
using namespace std;

int main()
{
	int n;
	unsigned int x=0,t;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		scanf("%u",&t);
		x^=t;
	}
	cout<<x;
	return 0;
}

