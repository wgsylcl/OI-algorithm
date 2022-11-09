#include<bits/stdc++.h>
#include<windows.h>
#include"math.h"
using namespace std;

int main()
{
	//system("chcp 65001");
	freopen("out.out","w",stdout);
	freopen("in.in","r",stdin);
	unsigned long long i=1,cnt=0;
	while(1)
	{
		if(pri(i))
		{
			cout<<i<<' ';
			cnt++;
			if(cnt%50==0)
			{
				cout<<"\n";
			}
		}
		i++;
	}
	return 0;
}

