#include <iostream>

#include <cstdio>

using namespace std;
int main()
{
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        for(int m=1;m<=i;m++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    system("pause");
    return 0;
}


