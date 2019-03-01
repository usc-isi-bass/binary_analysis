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
   int n,*p,x=0,i,a[500];
   scanf("%d",&n);
   for(i=1;i<=n;i++)
	   scanf("%d",&a[i]);
   printf("%d",a[1]);
   for(i=2;i<=n;i++){
	   x=0;
	   for(p=a;p<=a+i-1;p++)
	   {if(a[i]==*p||a[i]==a[1]) x=1;}
	   if(x!=1) printf(",%d",a[i]);
   }
}
