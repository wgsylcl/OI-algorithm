#include <iostream>

#include <cstdio>

using namespace std;
int main()
{
	freopen("in.in","r",stdin);
	freopen("out.out","w",stdout);
    long long n;
    cin>>n;
    
    for(long long i=1;i<=n;i++)
    {
        for(long long p=1;p<=i;p++)
        {
            printf("%lld*%lld=%lld ",i,p,i*p);
        }
        cout<<endl;
    }
    return 0;
}

