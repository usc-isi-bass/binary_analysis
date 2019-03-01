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

int main(int argc, char* argv[])
{
	int a,b,i,j;
	double x[1000];
	double c,d,e,f,s;
	scanf ("%d",&a);
	for (i=0;i<a;i++)
	{
		c=0.0;d=0.0;e=0.0;f=0.0;s=0.0;
		scanf("%d",&b);
		for (j=0;j<b;j++)
		{
			scanf("%lf",&x[j]);
            c=c+x[j];
		}
		   d=c/b;
        for (j=0;j<b;j++)
		{
			e=e+(x[j]-d)*(x[j]-d);
		}
		f=e/b;
		s=sqrt (f);
		printf("%.5lf\n",s);

	}

	return 0;
}