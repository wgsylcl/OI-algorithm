#include<bits/stdc++.h>
#include<windows.h>
using namespace std;

int main()
{
    long long a,s=0;
    cin>>a;
    system("cls");
    long long b=sqrt(a);
    for(long long t=2;t<=b;t++)
    {
    	long long  c=a%t;
    	if(c==0)
    	{
    		cout<<a<<"��������,���ĵ�һ����������"<<t<<endl;
    		s++;
    		break;
		}
		else
		{
			continue;
		}
	}
	if(s==0)
		cout<<a<<"������"<<endl;
	system("pause");
	return 0;
}

