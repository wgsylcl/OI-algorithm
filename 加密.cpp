#include<iostream>
#include<cstdio>
#include<string>
#include<fstream>
using namespace std;
#define lc(x) ((x)<<1)
#define rc(x) ((x)<<1|1)
#define fa(x) ((x)>>1)
string s=" ";
string r1="",r2="";
void getf(int x=1)
{
	if(x>=s.size()) return;
	getf(lc(x));
	getf(rc(x));	
	r1+=s[x];
	return;
}
void getm(int x=1)
{
	if(x>=s.size()) return;
	getm(lc(x));	
	r2+=s[x];
	getm(rc(x));
	return;
}
int main()
{
	char ch;
	ifstream input;
	input.open("std.in");
	while(input.get(ch)) s+=ch;
	getf();
	getm();
	for(int i=0;i<r1.size();i++)
	{
		cout<<r1[i]<<r2[i];
	}
	return 0;
}

