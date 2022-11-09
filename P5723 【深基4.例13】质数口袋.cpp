#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;
bool zs(int a)
{
	for(int i=2;i<=sqrt(a);i++)
	{
		if(a%i==0)
		return false;
	} 
	return true;
}
int main()
{
    int l,cnt=0,i=2;
    cin>>l;
    while(l>=i)
    {
    	if(zs(i))
    	{
    		cnt++;
    		l-=i;
    		cout<<i<<endl;
		}
		i++;
	}
	cout<<cnt;
	return 0;
}

