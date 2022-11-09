#include<iostream>
#include<cstdio>
using namespace std;

int main()
{
	int n;
	cin>>n;
	switch(n)
	{
		case 1:
			cout<<1<<endl;
			cout<<"1 1\n";
			break;
		case 2:
			cout<<4<<endl;
			cout<<"1 1\n";
			cout<<"2 1\n";
			cout<<"2 2\n";
			cout<<"1 2\n";
			break;
		default:
			cout<<-1;
	}
	return 0;
}

