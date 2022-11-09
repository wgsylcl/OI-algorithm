#include<iostream>
#include<cstdio>
#include<string>
using namespace std;
//void zyfuckccf()
//{
//	puts("zyfuckccf!");
//	zyfuckccf();
//}
int main()
{
//	zyfuckccf();
	puts("zyfuckccf!");
	return main();
//	return 0;
}

#if 0
void zyfuckccf()
{
	thread* th1=new thread(zyfuckccf);
	thread* th2=new thread(zyfuckccf);
	th1->deatch();
	th2->deatch();
	while(1) puts("zyfuckccf!");
}
#endif
