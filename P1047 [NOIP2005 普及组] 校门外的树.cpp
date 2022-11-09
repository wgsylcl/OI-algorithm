#include<bits/stdc++.h>
using namespace std;

int main()
{
	int l,m,u[100],v[100],tree[10000]={},cnt=0;
	cin>>l>>m;
	l++;
	for(int i=0;i<m;i++)
	{
		cin>>u[i]>>v[i];
		for(int j=u[i];j<=v[i];j++)
		{
			tree[j]=1;
		}
	}
	for(int i=0;i<l;i++)
	{
		if(tree[i]==1)
		{
			cnt++;
		}
	}
	cout<<l-cnt;
	return 0;
}


