#include <iostream>

#include <cstdio>

using namespace std;
#include <cmath>
bool zs(int num)
{
    for(int i=2;i<=sqrt(num);i++)
    if(num%i==0)
    return false;
    return true;
}
int main()
{
    int n;
    cin>>n;
    for(int i=4;i<=n;i+=2)
    {
    	for(int j=2;j<=i/2;j++)
    	{
    		if(zs(j)&&zs(i-j))
    		{
    			printf("%d=%d+%d\n",i,j,i-j);
    			break;
			}
		}
	}
    return 0;
}

