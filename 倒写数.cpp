#include <bits/stdc++.h>
using namespace std;

int main()
{
	int N,A,B,C,D;
	cin>>N;
	A=N/100;
	B=N/10%10*10;
	C=N%10*100;
	D=A+B+C;
	cout<<D;
	system("pause");
	return 0; 
}
