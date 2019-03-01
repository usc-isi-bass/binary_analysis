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
     int n,i,a[300],*p,*q;

	 scanf("%d",&n);
	 for(i=0;i<n;i++)
		 scanf("%d",&a[i]);
	 p=a;
	 printf("%d",*p);
	 for(p=a+1;p<a+n;p++)
	 {
		 for(q=p-1;q>=a;q--)
		 {
			 if(*p==*q)break;
		 }
		 if(q<a)
			 printf(",%d",*p);
	 }
	 return 0;
}

