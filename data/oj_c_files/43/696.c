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
	int m;
	cin>>m;
	int a=3;
	for(;a<=m/2;a=a+2)
	{
		double s=sqrt(a);
		int i=2;
		for (;i<=(int)s+1;i++)
		{
			int b;
			b=a%i;
			if(b==0) break;
		}
		if(i<=(int)s+1) continue;
		else {
			int c;
			c=m-a;
			double t=sqrt((double)c);
		int h=2;
		for (;h<=(int)t+1;h++)
		{
			int d;
			d=c%h;
			if(d==0) break;
		}
		if(h<=(int)t+1) continue;
		else
		{cout<<a<<' '<<c<<endl;}
		}
	}
	
	return 0;
}
