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
	int n,k,i,j;
	double a[1000],b,d,S,c;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		scanf("%d",&k);
		for(j=1;j<=k;j++)
		{
			scanf("%lf",&a[j]);
		}
		b=0;
		d=0;
       
	    for(j=1;j<=k;j++){
            b=b+a[j];
		}
		c=b/k;
		for(j=1;j<=k;j++){
			d=d+(a[j]-c)*(a[j]-c);
	    	S=sqrt(d/k);
		}
	    printf("%.5lf\n",S);
	}
	return 0;
}

