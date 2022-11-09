#include<iostream>
#include<cstdio>
#include<string>
#include<windows.h>
using namespace std;
FILE* file;
int main()
{
	char cmd[1000];
	for(int i=1;i<=45;i++)
	{
		sprintf(cmd,"md cena\\example\\src\\HB-%d\\test2",i);
		system(cmd);
		sprintf(cmd,"cena\\example\\src\\HB-%d\\test2\\test2.cpp",i);
		file=fopen(cmd,"w+");
		fprintf(file," ");
		fclose(file);
	}
	return 0;
}

