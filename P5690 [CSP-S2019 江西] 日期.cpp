#include<iostream>
#include<cstdio>
using namespace std;

int main()
{
    int month,date,cnt=0;
    char empty;
    cin>>month>>empty>>date;
    if(month>12)
    {
    	cnt++;
	}
	if(month%10==2&&date>28)
	{
		cnt++;
	}
	else if(month%10!=2)
	{
		switch(month)
		{
			case 1:
			case 3:
			case 5:
			case 7:
			case 8:
			case 10:
			case 12:
				if(date>31)
				cnt++;
				break;
			default:
				if(date>30)
				cnt++;		
		}
	}
	cout<<cnt;
	return 0;
}

