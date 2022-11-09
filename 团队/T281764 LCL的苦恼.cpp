#include<iostream>
#include<cstdio>
using namespace std;
typedef int ld;
ld gcd(ld a,ld b)
{
	if(a<b) swap(a,b);
	if(b==0) return a;
	return gcd(a%b,b);
}
int main()
{
	ld va,vb;
	cin>>va>>vb;
	ld s=(va*vb)/gcd(va,vb);
	ld ta=s/va,tb=s/vb;
	printf("%.2f",double(s*2)/double(ta+tb));
	return 0;
}

