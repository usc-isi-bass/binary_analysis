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
	int n,k;double a[200]={0}; double sum=0;double b,c;  double sum2=0;

	scanf("%d",&n);
	int i,j;
	for(i=0;i<n;i++)
	{
	scanf("%d",&k);
    for(j=0;j<k;j++)
	{
    scanf("%lf",&a[j]);
    sum=sum+a[j];
	}
	b=sum/k;
	for(j=0;j<k;j++)
	{
		sum2+=(a[j]-b)*(a[j]-b);
	}

	c=sqrt(sum2/k);

	printf("%.5lf\n",c);

  for(j=0;j<k;j++)
  {
	  a[j]=0;
  }
  k=0;
  sum=0;
  sum2=0;






	}
	return 0;
}
