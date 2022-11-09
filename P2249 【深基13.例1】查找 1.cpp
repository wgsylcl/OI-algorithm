#include<iostream>
#include<cstdio>
using namespace std;
int a[1000000],n,m,q,*t;
inline int read()
{
	int x=0;
	char ch;
	for(ch=getchar();!isdigit(ch);ch=getchar());
	for(;isdigit(ch);ch=getchar())
	{
		x=(x<<3)+(x<<1)+(ch-'0');
	}
	return x;
}
inline void write(int x)
{
	if(x<0)
	{
		putchar('-');
		x=-x;
	}
	if(x>9) write(x/10);
	putchar(x%10+'0');
	return;
}
int main()
{
	n=read(),m=read();
	for(int i=0;i<n;i++) a[i]=read();
	while(m--)
	{
		q=read();
		t=lower_bound(a,a+n,q);
		if(*t!=q) write(-1);
		else write(t-a+1);
		putchar(' ');
	}
	return 0;
}

