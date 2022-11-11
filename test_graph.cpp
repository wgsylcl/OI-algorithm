#include<iostream>
#include<cstdio>
#include"testlib_graph.h"
using namespace std;
using namespace OJ;
int main()
{
    make_graph(10,18,unicom|loop).display();
    return 0;
}
