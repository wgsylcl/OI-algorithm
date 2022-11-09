#include<iostream>
#include<cstdio>
using namespace std;
int f(int n,int find)
{
	int cnt=0;
	while(n)
	{
		if(n%10==find)
		cnt++;
		n/=10;
	}
	return cnt;
}
int main()
{
    int (*num)(int,int);
    num=f;
    int n,target,cnt=0;
    cin>>n>>target;
    for(int i=1;i<=n;i++)
    {
    	cnt+=num(i,target);
	}
	cout<<cnt;
	return 0;
}

