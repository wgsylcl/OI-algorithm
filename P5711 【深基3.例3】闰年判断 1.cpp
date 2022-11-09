#include<iostream>
#include<cstdio>
using namespace std;
int nb(int x)
{
	if(x%400==0) return 1;
	if(x%100==0) return 0;
	if(x%4==0) return 1;
	return 0;
}
inline int read()
{
	int num=0,f=1;
	char ch;
	for(ch=getchar();!isdigit(ch);ch=getchar()) if(ch=='-') f=-1;
	for(;isdigit(ch);ch=getchar()) num=(num<<3)+(num<<1)+(ch-'0');
	return num*f;
}
inline void write(int x)
{
	if(x>=10) write(x/10);
	putchar(x%10+'0');
}
int main()
{
	write(nb(read()));
	return 0;
}

