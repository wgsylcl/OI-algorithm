#include<bits/stdc++.h>
using namespace std;

int main()
{
    int A,B,C,D;
    cout<<"等差数列求项,请在第一个,第二个地方写第1,2项,第三个地方写项数";
    cin>>A>>B>>C;
    D=A+(C-1)*(B-A);
    cout<<D;
    system("pause");
	return 0;
}

