#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;
bool year(int a)
{
	if(a%4==0&&a%100!=0||a%400==0)
	return true;
	return false;
}
int main()
{
    int low,high;
    int ry[3000-1582+1];
    int cnt=0;
    cin>>low>>high;
    for(int i=low;i<=high;i++)
    {
    	if(year(i))
    	{
    		ry[cnt]=i;
    		cnt++;
		}
	}
	cout<<cnt<<endl;
	for(int i=0;i<cnt;i++)
	{
		cout<<ry[i]<<" ";
	}
	return 0;
}

