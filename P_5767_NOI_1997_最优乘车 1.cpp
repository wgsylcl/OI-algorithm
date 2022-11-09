#include<iostream>
#include<cstdio>
using namespace std;
inline int read()
{
    int x=0,f=1;
    char ch;
    for(ch=getchar();!isdigit(ch);ch=getchar()) if(ch=='-') f=-1;
    for(;isdigit(ch);ch=getchar())
    {
        x=(x<<3)+(x<<1)+(ch-'0');
    }
    return f*x;
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
    
    return 0;
}
