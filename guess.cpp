#include<iostream>
#include<cstdio>
#include<vector>
#include"interaction.h"
using namespace std;
int getnum(int i)
{
	int l=0,r=1000000;
	while(l<=r)
	{
		int mid=l+r>>1;
		switch(guess(i,mid))
		{
			case -1:
				l=mid+1;
				break;
			case 1:
				r=mid-1;
				break;
			case 0:
				return mid;
		}
	}
}
int main()
{
	int n=get_num();
	vector<int>ans;
	for(int i=0;i<n;i++)
	{
		ans.push_back(getnum(i));
	}
	submit(ans);
	return 0;
}

