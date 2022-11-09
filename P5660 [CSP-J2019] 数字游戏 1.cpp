#include<iostream>
#include<cstdio>
#include<string>
using namespace std;

int main()
{
    string str;
    int cnt=0;
    cin>>str;
    for(int i=0;i<8;i++)
    {
    	if(str[i]=='1')
    		cnt++;
	}
	cout<<cnt;
	return 0;
}

