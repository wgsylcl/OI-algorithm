#include<iostream>
#include<cstdio>
using namespace std;
int a[100005],m,n,Max,tot,ans;
bool check(int len)
{
	int cnt=0,now=0;
	for(int i=1;i<=n;i++)
	{
		if(i==1||a[i]+now>len)
		{
			cnt++;
			now=a[i];
		}
		else now+=a[i];
	}
	return cnt<=m;
}
int main()
{
	freopen("c++.in","r",stdin);
	freopen("c++.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++) cin>>a[i],Max=max(Max,a[i]),tot+=a[i];
	int l=Max,r=tot,mid;
	while(l<=r)
	{
		mid=(l+r)/2;
		if(check(mid)) ans=mid,r=mid-1;
		else l=mid+1;
	}
	cout<<ans;
	return 0;
}

