#include<iostream>
#include<cstdio>
#include<unordered_map>
using namespace std;
unordered_map<int,int>book;
unordered_map<int,int>::iterator it;
void run()
{
	int n,x;
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		scanf("%d",&x);
		it=book.find(x);
		if(it==book.end())
		{
			printf("%d ",x);
			book.insert(pair<int,int>(x,1));
		}
	}
	book.clear();
	puts("");
	return;
}
int main()
{
	int t;
	cin>>t;
	while(t--) run();
	return 0;
}
