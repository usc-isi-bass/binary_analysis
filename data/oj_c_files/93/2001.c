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
 int n,i,f=0;
 scanf("%d",&n);
 for (i=3;i<=7;i=i+2)
   if (n%i==0)
	 {
	 f=1;
	 printf("%d",i);
	 break;
	 }
 for (i=i+2;i<=7;i=i+2)
   if (n%i==0)
	 {
	 f=1;
	 printf(" %d",i);
	 }
 if (f==0)
   printf("n");
 printf("\n");
}