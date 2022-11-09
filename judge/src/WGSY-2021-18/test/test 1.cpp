#include<iostream>
#include<cstdio>
using namespace std;
struct Ticket{
	int time;
	int price;
	bool used;
	Ticket():used(false){};
}tic[100010];
int main()
{
#define fre
#ifdef fre
	freopen("transfer.in","r",stdin);
	freopen("transfer.out","w",stdout);
#endif
	int n,ans=0,op,pr,tim,head=0,tail=0,flag;
	cin>>n;
	for(int k=0;k<n;k++)
	{
		scanf("%d%d%d",