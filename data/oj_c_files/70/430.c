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
    int n,i,j;
	double x[1000],y[1000],a,b,c,k=0;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{ scanf("%lf %lf",&x[i],&y[i]);}
for(i=1;i<n;i++)
{for(j=i+1;j<=n;j++){
      a=x[j]-x[i];
	  b=y[j]-y[i];
	  c=sqrt(a*a+b*b);
	if(k<c)
	{	k=c;}
}
}
	printf("%.4lf\n",k);
	return 0;
}

