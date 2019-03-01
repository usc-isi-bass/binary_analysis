#include <ctype.h>
#include <errno.h>
#include <float.h>
#include <iso646.h>
#include <limits.h>
#include <locale.h>
#include <math.h>
#include <setjmp.h>
#include <signal.h>
#include <stdarg.h>
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

int main ()
{
	int n ,i;
	double a0,b0,a,b;
	double p1,p2;
	cin>>n;
	cin>>a0>>b0;
	p1=b0/a0;
	for(i=1;i<=n-1;i++)
	{
		cin>>a>>b;
		p2=b/a;
		if(fabs(p1-p2)<=0.05)
			cout<<"same"<<endl;
		else if (p1-p2>0.05)
			cout<<"worse"<<endl;
		else
			cout<<"better"<<endl;
	}
	return 0;
}