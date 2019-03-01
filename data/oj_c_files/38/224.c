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
	int k;
	scanf("%d",&k);
	while(k--)
	{
		int n;
		scanf("%d",&n);
		double a[200];
      int i;
	  for(i=0;i<n;i++)
		  scanf("%lf",&a[i]);
	  double sum=0;
	  double *p;
	  for(p=a;p<a+n;p++)
		  sum+=*p;
	  double ave;
	  ave=sum/n;

	  double result=0;
	  for(p=a;p<a+n;p++)
		  result+=(*p-ave)*(*p-ave);
	  result=sqrt(result/n);


	  printf("%.5lf\n",result);
	}
	return 0;
}