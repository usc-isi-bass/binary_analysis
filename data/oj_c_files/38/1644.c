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
	int k,n,i,a[100];
	double b[100],s=0,c,S=0,x,j;
		scanf("%d",&k);
	for(n=0;n<k;n++)
	{
		scanf("%d",&a[n]);
		for(i=0;i<a[n];i++)
		{
			scanf("%lf",&b[i]);
        	s+=b[i];
		}
		c=s/a[n];
		s=0;
        for(i=0;i<a[n];i++)
		{
		S+=(b[i]-c)*(b[i]-c);
		}
		x=S/a[n];
		S=0;
		j=sqrt(x);
		printf("%.5f\n",j);
	}
	return 0;
}


	

	