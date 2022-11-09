#include "testlib.h"
#define ll long long
int main(int argc, char* argv[]) {
    registerTestlibCmd(argc, argv);
    ll len = inf.readLong();
    while(len--)
	{
		ll a,b,x,y;
		a=inf.readLong();
		b=inf.readLong();
		x=ouf.readLong();
		y=ouf.readLong();
		if(a*x+b*y!=1)
		{
			quitf(_wa,"The answer is wrong:%d*%d+%d*%d!=1",a,x,b,y);
			return 0;
		}
	}
	quitf(_ok, "The answer is correct.");
	return 0;
//    if (fabs(pans - jans)<=0.02)
//        
//    else
//        quitf(_wa, "The answer is wrong: expected = %f, found = %f", jans, pans);
}
