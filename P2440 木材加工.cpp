#include<iostream>
#include<cstdio>
using namespace std;
inline int read()
{
	int x=0;
	char ch;
	for(ch=getchar();!isdigit(ch);ch=getchar());
	for(;isdigit(ch);ch=getchar())
	{
		x=(x<<3)+(x<<1)+(ch-'0');
	}
	return x;
}
int n,k,ans,wood[1000010],l,r=0;
bool check(int len)
{
	int sum=0;
	for(int i=0;i<n;i++)
	{
		sum+=(wood[i]/len);
	}
	return sum>=k;
}
int main()
{
	n=read(),k=read();
	for(int i=0;i<n;i++) wood[i]=read(),r=max(r,wood[i]);
	while(l<=r)
	{
		int mid=(l+r)>>1;
		if(mid==0||check(mid))
		{
			ans=max(mid,ans);
			l=mid+1;
			if(mid==0) break;
		}
		else r=mid-1;
	}
	cout<<ans;
	
	return 0;
}

