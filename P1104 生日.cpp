#include <iostream>
#include <map>
#include <cstdio>

using namespace std;

int main()
{
#define fre
#ifdef fre
	freopen("live.in","r",stdin);
	freopen("live.out","w",stdout);
#endif
    int n,w,pr,sum=0,nowsc=0;
    map<int,int>book;
	map<int,int>::iterator iter;
    cin>>n>>w;
    for(int i=1;i<=n;i++)
    {
        cin>>pr;
        if(book.find(pr)==book.end())
        {
        	book.insert(pair<int,int>(pr,0));
		}
		book[pr]=book[pr]+1;
		if(i==1)
		{
		    iter=book.find(pr);
		    nowsc=pr;
		}
		if(pr>=nowsc) sum++;
		while(sum>max(1,i*w/100))
		{
		    sum-=iter->second;
		    iter++;
		    nowsc=iter->first;
		}
		while(sum<max(1,i*w/100))
		{
		    iter--;
		    sum+=iter->second;
		    
		    
		    nowsc=iter->first;
		}
        cout<<nowsc<<" ";
    }
    return 0;
}
