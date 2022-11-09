#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;

int main()
{
    int w,n,price[30003];
    cin>>w>>n;
    for(int i=0;i<n;i++)
    {
    	cin>>price[i];
	}
	sort(price,price+n);
	int low=0,high=n-1,cnt=0;
	while(low<=high)
	{
		if(price[high]+price[low]>w)
		{
			cnt++;
			high--;
			continue;
		}
		if(price[high]+price[low]<=w)
		{
			cnt++;
			low++;
			high--;	
		}
	}
	cout<<cnt;
	return 0;
}

