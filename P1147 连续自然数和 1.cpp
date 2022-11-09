#include<iostream>
#include<cstdio>
using namespace std;
#define sum(l,r) ((l+r)*(r-l+1)/2)
int m,l,r,t;
int main()
{
	cin>>m;
	while(l<m)
	{
		t=sum(l,r);
		if(t==m)
		{
			printf("%d %d\n",l,r);
		}
		if(t<=m)
		{
			r++;
		}
		if(t>m)
		{
			l++;
		}
	}
	return 0;
}

