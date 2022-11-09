#include<windows.h>
#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	if(n<0)
	n=0-n;	
	for(int i=0;i<n&&i<8;i++)
    system("start www.baidu.com");
	return 0;
}

