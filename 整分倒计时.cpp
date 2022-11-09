#include<bits/stdc++.h>
#include<windows.h>
using namespace std;

int main()
{
    long long a;
    cin>>a;
    for(long long m=a-1;m>=0;m--)
    {
    	for(int s=59;s>=0;s--)
		{
			system("cls");
			printf("%d",m);
			printf(":");
			printf("%d",s);
			Sleep(1000);
		}
	}
	system("cls");
	system("color 0a");
	cout<<"ʱ�䵽!";
	system("pause");
	return 0;
}

