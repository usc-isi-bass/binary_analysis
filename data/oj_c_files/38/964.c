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
{  int n,i;
int num;
double *f1,s,a;
scanf("%d",&n);
while(n--)
{ a=0;s=0;
	scanf("%d",&num);
	f1=(double*)malloc(num*sizeof(double));
	for(i=0;i<num;i++)
	{ scanf("%lf",f1+i);
	a+=*(f1+i);
	}
   a=a/(double)num;
for(i=0;i<num;i++)	
   s+=(*(f1+i)-a)*(*(f1+i)-a);
s=sqrt(s/(double)num);
printf("%.5f\n",s);
}
	
	return 0;
}