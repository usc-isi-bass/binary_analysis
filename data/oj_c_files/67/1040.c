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

int main()
{
	int i,n;
	double a,b;
	double x,y;
	double another,effect;
	cin>>n;
	cin>>a>>b;
	effect=b/a;
	for(i=1;i<n;i++)
	{
		cin>>x>>y;
		another=y/x;
		if(another-effect>0.05)
		{
			cout<<"better"<<endl;
		}
		if(effect-another>0.05)
		{
			cout<<"worse"<<endl;
		}
		if(fabs(another-effect)<=0.05)
		{
			cout<<"same"<<endl;
		}
	}
	return 0;
}