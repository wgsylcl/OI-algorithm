#include<iostream>
#include<cstdio>
#include<string>
#include<unordered_map>
using namespace std;
unordered_map<string,int>h;
unordered_map<string,int>::iterator it;
int ans,n;
string s;
int main()
{
	cin>>n;
	while(n--)
	{
		cin>>s;
		it=h.find(s);
		if(it==h.end())
		{
			ans++;
			h.insert(pair<string,int>(s,1));
		}
	}
	cout<<ans;
	return 0;
}

