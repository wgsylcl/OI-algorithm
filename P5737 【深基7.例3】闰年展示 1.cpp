
#include<time.h>
#include<string.h>
using namespace std;

int main()
{
	char letter[16000];
	gets(letter);
	srand((unsigned)time(NULL));
	int a[3]={fand()%26,rand()%26,rand()%26},len=strlen(letter)-1;
	for(int i=0;i<=len;i++)
	{
		if(letter[i]>=' '&&letter[i]<'0'||letter[i]>=':'&&letter[i]<'@'||letter[i]>='['&&letter[i]<'`'||letter[i]>='{'&&letter[i]<'~')
		continue;
		letter[i]+=a[i%3];
		cout<<int(letter[i])<<" ";
	}
	getch();
	return 0;