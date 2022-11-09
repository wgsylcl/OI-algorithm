#include<iostream>
#include<cstdio>
#include<string>
using namespace std;

int main()
{
	freopen("demo.cpp","r",stdin);
	freopen("demo.out","w",stdout);
	while(!cin.eof())
	{
		string s;
		const char c='"';
		getline(cin,s);
		cout<<c<<s<<c<<",\n";
	}
	return 0;
}

