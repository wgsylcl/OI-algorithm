#include<iostream>
#include<cstdio>
using namespace std;

int main()
{
	unsigned int num;
	cin>>num;
	cout<<(num<<16)+(num>>16);
	return 0;
}

