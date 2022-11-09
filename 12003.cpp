#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;
struct milk
{
	int pi;
	int ai;
};
bool cmp(milk a,milk b)
{
	return a.pi<=b.pi;
}
int main()
{
	milk in[5005];
	int m,n;
	cin>>n>>m;
	for(int i=0;i<m;i++)
	{
		cin>>in[i].pi>>in[i].ai;
	}
	sort(in,in+m,cmp);
	int min=0,have=0,p=0;
	while(have<n)
	{
		if(in[p].ai==0)
		p++;
		have++;
		in[p].ai--;
		min+=in[p].pi;
	}
	cout<<min;
	return 0;
}
