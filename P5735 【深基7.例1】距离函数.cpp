#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;
struct point
{
	double x;
	double y;
};
double mi(double a)
{
	return a*a;
}
double max(point a,point b,point c)
{
	double dis=0;
	double qdis=0;
	qdis=sqrt(mi(a.x-b.x)*mi(a.y-b.y));
	dis+=qdis;
	qdis=sqrt(mi(a.x-c.x)*mi(a.y-c.y));
	dis+=qdis;
	qdis=sqrt(mi(c.x-b.x)*mi(c.y-b.y));
	dis+=qdis;
	return dis;
}
int main()
{
    point a,b,c;
    cin>>a.x>>a.y>>b.x>>b.y>>c.x>>c.y;
    printf("%.2f",max(a,b,c));
	return 0;
}

