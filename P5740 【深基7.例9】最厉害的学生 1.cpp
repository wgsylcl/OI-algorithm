#include<bits/stdc++.h>
#include<mysql.h>
#include"mysql.h"
#include<direct.h>
using namespace std;
char password[1<<8],buf[1<<20];
string op,file,task,path;
map<string,int> m;
MYSQL *mysql=mysql_init(NULL);
MYSQL_RES* res; 
MYSQL_ROW row;
MYSQL_FIELD* fields;
string mode[4]={"","_","__","___"},_mode[4]={"1","_1","__1","___1"},type[]={"in","out","ans"};
struct node
{
	string data;
	int id;
	string typ;
	node(string data,int id,string typ):data(data),id(id),typ(typ){}
};
int getmode()
{
	string s=task+"\\";
	for(int i=0;i<4;i++)
	{
		ifstream check;
		check.open((s+task+_mode[i]+".in").c_str());
		if(check.is_open()) return i;
	}
}
bool have_file(string path)
{
	ifstr