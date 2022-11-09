#include<iostream>
#include<cstdio>
using namespace std;

int two[30]={1,2,4,8,16,32,64,128,256,512,1024,2048,4096,8192,16384,32768,65536,131072,262144,524288,1048576,2097152,4194304,8388608,16777216,33554432,67108864,134217728,268435456,536870912};
int book[30];

int main()
{
    int n,k=0;
    cin>>n;
    if((n&1)!=0)
    {
    	cout<<-1;
    	return 0;
	}
    while(n)
    {
    	if(n%2!=0)
    	{
    		book[k]=1;
		}
		k++;
		n/=2;
	} 
	for(int i=k;i>=0;i--)
	{
		if(book[i]) cout<<two[i]<<" ";
	}
	return 0;
}

