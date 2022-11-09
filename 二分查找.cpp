#include<bits/stdc++.h>
using namespace std;
bool cz(int* array,int min,int max,int finish)
{
	if(min>max)
	return 0;
	if((array[min]+array[max])/2>finish)
	return cz(array,(min+max)/2+1,max,finish);
	if((array[min]+array[max])/2<finish)
	return cz(array,min,(min+max)/2-1,finish);
	if((array[min]+array[max])/2==finish)
	return 1;	
}
int main()
{
	int* a=new int[100000];
	int n,x;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	cin>>x;
	if(cz(a,0,n-1,x))
	{
		cout<<"have\n";
	}
	else
	{
		cout<<"does not have or the array is error\n";
	}
	system("pause");
	return 0;
}


