#include<iostream>
#include<cstdio>
#include<cstdlib>
using namespace std;
typedef FILE* PFILE;
int main(int argc,char** argv)
{
	PFILE fsc=fopen("score.log","w"),fre=fopen("report.log","w"),fou=fopen("std.out","r"),fas=fopen(argv[2],"r");
	long long ans,out;
	int sc=atoi(argv[1]);
	fscanf(fas,"%lld",&ans);
	fscanf(fou,"%lld",&out);
	if(ans==out)
	{
		fprintf(fre,"正确");
		fprintf(fsc,"%d",sc);
	}
	else
	{
		fprintf(fre,"错误的答案");
		fprintf(fsc,"%d",0);
	}
	return 0;
}

