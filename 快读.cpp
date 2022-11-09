#include<iostream>
#include<cstdio>

using namespace std;
inline int read()
{
	int f=1,x=0;
	char ch=getchar();
	while(!isdigit(ch))
	{
		if(ch=='-')
		f=-1;
		ch=getchar();
	}
	while(isdigit(ch))
	{
		x=(x<<3)+(x<<1)+(ch-'0');
		ch=getchar();
	}
	return f*x;
}
inline void write(int num)
{
	if(num<0)
	{
		putchar('-');
		num=-num;
	}
	if(num>=10) write(num/10);
	putchar(num%10+'0');
	return;
}
int main()
{
	int n;
	n=read();
	write(n);
	return 0;
}

