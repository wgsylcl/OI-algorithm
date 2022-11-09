#include<iostream>
#include<cstdio>
#include<string>
#define ch str[i]
using namespace std;

int main()
{
    string str;
    getline(cin,str);
    int cnt=0,len=str.size();
    for(int i=0;i<len;i++)
    {
    	if(ch==' ')
    	{
    		cnt++;
    		continue;
		}
		if(ch>='a'&&ch<='o')
		{
			ch-='a';
			cnt+=ch%3;
			cnt++;
			continue;
		}
		if(ch>='p'&&ch<='v')
		{
			ch-='p';
			cnt+=ch%4;
			cnt++;
			continue;
		}
		if(ch>='w'&&ch<='z')
		{
			ch-='w';
			cnt+=ch%4;
			cnt++;
		}
	}
	cout<<cnt;
	return 0;
}

