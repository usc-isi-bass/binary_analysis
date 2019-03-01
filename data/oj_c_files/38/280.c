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
	int n,m,i,j;
	double a[1000],sum1=0,sum2=0,ave1=0,sum3=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&m);
      for(j=0;j<m;j++)
	  {
		  scanf("%lf",&a[j]);
          sum1+=a[j];
	  }
	  ave1=sum1/m;
      for(j=0;j<m;j++)
	  {
		  sum2+=(a[j]-ave1)*(a[j]-ave1);
	  }
	  sum3=pow(sum2/m,0.5);
	  printf("%.5lf\n",sum3);
	  sum1=0;
	  sum2=0;
	  sum3=0;
	  ave1=0;
	}
	return 0;
}

