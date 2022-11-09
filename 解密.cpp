#include<iostream>
#include<cstdio>
#include<string>
#include<fstream>
using namespace std;
#define lc(x) ((x)<<1)
#define rc(x) ((x)<<1|1)
#define fa(x) ((x)>>1)
char s[10000000],ch;
string rl="",rm="";
int len;
int main()
{
	while(cin.get(ch))
	{
		rl+=ch;
		cin.get(ch);
		rm+=ch;
	}
	len=rl.size();
	return 0;
}

