#include<iostream>
#include<cstdio>
#include<cstdlib>
using namespace std;
typedef FILE* PFILE;
int main(int argc,char** argv)
{
	PFILE fsc=fopen("score.log","w"),fre=fopen("report.log","w"),fou=fopen("test.out","r"),fas=fopen(argv[2],"r");
	int tot=0;
	char ans[1000],out[1000];
	fgets(out,1000,fou);
	fgets(ans,1000,fas);
	for(int i=0;i<50;i++)
	{
		if(ans[i]==out[i])
		tot+=2;
	}
	fputs("sb",fre);
	fprintf(fsc,"%d",tot);
	return 0;
}

