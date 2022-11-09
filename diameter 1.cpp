#include<iostream>
#include<cstdio>
#include<string>
using namespace std;
int ans1,ans2,ans;
string expr;
int find_nex(int start,char target)
{
	for(int i=start+1;i<expr.size();i++)
	if(expr[i]==target) return i;
	return -1;
}
int find_pair(int start)
{
	int left=0;
	for(int i=start;i<expr.size();i++)
	{
		switch(expr[i])
		{
			case '(':
				left++;
				break;
			case ')':
				left--;
				break;
		}
		if(!left)
		return i;
	}
	return -1;
}
int solve(int l,int r) //solve [l,r): 
{
	int ret=0;
	if()
//	if(expr[l]=='(')
//	{
//		int match=find_pair(l);
//		int res=solve(l+1,match);
//		char op=expr[match+1];
//		if(op=='|'&&res==1)
//		{
//			ans2++;
//			return 1;
//		}
//		if(op=='&'&&res==0)
//		{
//			ans1++;
//		}
//		if(op=='|'&&res==0)
//		{
//			return re
//		}
//	}
	return ret;
}
int main()
{
#ifndef fre
#ifndef ONLINE_JUDGE
	freopen("expr.in","r",stdin);
	freopen("expr.out","w",stdout);
#endif
#endi