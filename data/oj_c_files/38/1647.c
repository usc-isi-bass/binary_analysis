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
	scanf("%d",&k);
	double x[100][100],s[100]={0},sum=0,a[100];
	for (i = 0; i < k; i++)
	{
	   scanf("%d",&n);	
	   sum=0;
	   for (j = 0; j < n; j++)
	   {
	    scanf("%lf",&x[i][j]);
	    sum+=x[i][j];
	   }
       a[i]=sum/(double)(n);
	   for (j = 0; j < n; j++)
	   s[i]+=(x[i][j]-a[i])*(x[i][j]-a[i]);
	   s[i]=s[i]/(double)(n);
	   s[i]=sqrt(s[i]);
	}
     for (i = 0; i < k; i++)
       printf("%.5lf\n",s[i]);
	return 0;
}