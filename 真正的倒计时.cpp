#include<bits/stdc++.h>
#include<windows.h>
using namespace std;

int main()
{
    int a[10];
    cin>>a[0]>>a[1]>>a[2];
	for(a[3]=a[0];a[3]>=0;a[3]--)
	{
	    for(a[4]=a[1];a[4]>=0;a[4]--)
	    {
	    	for(a[5]=a[2];a[5]>=0;a[5]--)
	    	{
	    		system("cls");
	    		cout<<a[3]<<":"<<a[4]<<":"<<a[5];
	    		Sleep(1000);
			}
			a[2]=59;
		}
		a[1]=59;
	}
	system("color 0a");
	system("cls");
	cout<<"ʱ�䵽!"<<endl;
	system("pause");
	return 0;
}

