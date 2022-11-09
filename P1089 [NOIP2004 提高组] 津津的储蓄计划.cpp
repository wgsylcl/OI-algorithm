#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
	int pay[12],money=0,mother=0;
	for(int i=0;i<12;i++)
	{
		cin>>pay[i];
	}
	for(int i=0;i<12;i++)
	{
		money+=300;
		if(money<pay[i])
		{
			cout<<-i-1;
			return 0;
		}
		while((money-pay[i])>=100)
		{
			money-=100;
			mother+=100;
		}
		money-=pay[i];
	}
	cout<<money+mother*1.2;
	return 0;
}
