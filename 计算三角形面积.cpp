#include<bits/stdc++.h>
using namespace std;

int main()
{
    double x1,x2,y1,y2,z1,z2;
    cin>>x1>>x2>>y1>>y2>>z1>>z2;
    double a=sqrt((x1-y1)*(x1-y1)+(x2-y2)*(x2-y2));
    double b=sqrt((y1-z1)*(y1-z1)+(y2-z2)*(y2-z2));
    double c=sqrt((x1-z1)*(x1-z1)+(x2-z2)*(x2-z2));
    double p=(a+b+c)/2;
    double s=p*(p-a)*(p-b)*(p-c);
    printf("%.2f",s);
    system("pause");
	return 0;
}

