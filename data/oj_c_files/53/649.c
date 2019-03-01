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

void main()
{
 int n,s,i,*p,*q,a[300];
 scanf("%d",&n);
 for(p=a;p<=(a+n-1);p++)
	 scanf("%d",&*p);
 printf("%d",*a);
 for(p=a+1,i=1;p<=(a+n-1);i++,p++)
 {
	 for(q=a,s=0;q<=p-1;q++)
	 {
		 if(*q!=*p)s++;
		 else break;
	 }
	 if(s==i)printf(",%d",*p);
 }

}