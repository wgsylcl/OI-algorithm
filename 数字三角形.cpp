#include <iostream>

#include <cstdio>

using namespace std;
int main()
{
	freopen("in.in","r",stdin);
	freopen("out.out","w",stdout);
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        for(int m=1;m<=i;m++)
        {
            //cout<<m<<" ";
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}

