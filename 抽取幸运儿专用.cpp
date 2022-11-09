#include<iostream>
#include<cstdio>
#include<conio.h>
#include<windows.h>
#include<time.h>
using namespace std;
int main()
{
	srand((unsigned)time(NULL));
    while(!kbhit())
    {
    	Sleep(10);
    	system("cls");
    	cout<<rand()%45+1;
	}
	int r=rand()%10+1;
	for(int i=1;i<r*2;i++)
	{
		Sleep(i*60);
    	system("cls");
    	cout<<rand()%45+1;
	}
	cout<<"!!!";
	for(int i=0;i<5;i++)
	getch();
	return 0;
}

