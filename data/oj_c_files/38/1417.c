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
	int n,n1,i,j;
	double a[1000],sum=0.0,tmp=0.0,eve,out;
	scanf ("%d",&n);
	for (i=0;i<n;i++)
	{
		scanf ("%d",&n1);
		for (j=0;j<n1;j++)
		{
			scanf ("%lf",&a[j]);
			sum+=a[j];
		}
		eve=(double)sum/n1;
		for (j=0;j<n1;j++)
		{
			tmp+=(a[j]-eve)*(a[j]-eve);
		}
		out=sqrt(tmp/n1);
		printf ("%.5lf\n",out);
		out=0.0;tmp=0.0;eve=0.0;sum=0.0;
	}
	return 0;
}