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
	int n,i,j;
	double a[100],b[100],c[100],p,q,ww;
	scanf("%d",&n);
	scanf("%lf%lf",&p,&q);
	ww=q/p;
	for(i=0;i<n-1;i++)
	{
	    scanf("%lf%lf",&(a[i]),&(b[i]));
		c[i]=b[i]/a[i];
		if(c[i]-ww>0.05)
			printf("better\n");
		
		
		else	if(ww-c[i]>0.05)
			
			    printf("worse\n");
			else	if(ww-c[i]<=0.05||c[i]-ww<=0.05)
					printf("same\n");
			
		
	}

		
	return 0;
}
