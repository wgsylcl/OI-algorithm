#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;
long long num=1;
void f(int x)
{
	if(x==0)
	return;
	num*=x;
	return f(x-1);
}
int main()
{
    int x;
    cin>>x;
    f(x);
    cout<<num;
	return 0;
}

