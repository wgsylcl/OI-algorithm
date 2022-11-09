#include <iostream>
#include <fstream>
#include <cstdio>
using namespace std;
typedef unsigned long long L;
L m[10002][10002]={};
L tra(L x,L y)
{
    if(x==y||y==1)
    return 1;
    if(m[x-1][y-1]==0)
    m[x-1][y-1]=tra(x-1,y-1)+tra(x-1,y);
    return m[x-1][y-1];
}
int main()
{
	ofstream out;
	out.open("c++.out",ios::out);
    L n;
    cin>>n;
    for(L i=1;i<=n;i++)
    {
    	cout<<i<<endl;
        for(L j=1;j<=i;j++)
        {
            out<<tra(i,j)<<" ";
        }
        out<<endl;
    }
    return 0;
}

