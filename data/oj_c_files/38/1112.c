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
	int k,n,i,j;
	double x[101],s,p,f,d[101];
	
	scanf("%d",&k);
	
	for (i=1;i<=k;i++)
	{
		scanf("%d",&n);s=0;
		
		for (j=1;j<=n;j++)
		{	
			scanf("%lf",&x[j]);
			s=s+x[j];
		}
		
		p=s/n;f=0;
		for (j=1;j<=n;j++)
			f=f+(x[j]-p)*(x[j]-p);
		f=(double)f/n;
		f=sqrt(f);
		d[i]=f;
	}
	
	for (i=1;i<=k;i++)
		printf("%.5lf\n",d[i]);
	


}

