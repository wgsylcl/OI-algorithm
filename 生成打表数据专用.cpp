#include<iostream>
#include<cstdio>
using namespace std;

int main()
{
	int x=0;
	for(int i=0;i<16;i++) x+=(1<<i);
	cout<<x; 
	return 0;
}

