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
	int m,n,i,j;
	double a=2,b=0;
	scanf("%d",&m);
	 for(i=0;i<m;i++)
	 {
		 double sum=2;
		 scanf("%d",&n);
         for(j=0;j<n;j++)
		  {
			  
			  sum+=b;
			  b=1/a+1;
			  a=1/a+1;
		  }
		  printf("%.3lf\n",sum);
		  a=2;
		  b=0;

	 }
	 return 0;
}
