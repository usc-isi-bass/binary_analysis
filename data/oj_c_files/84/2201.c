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
 int i=0;
 int n,tmp=0;
 int a=0,b=0;
 scanf("%d",&n);

 for(i=0;i<n;i++)
 {
   scanf("%d",&tmp);
   if (tmp>a)
   {
     b=a;
     a=tmp;
   }
   else 
   {
     if (tmp>b)
       b=tmp;
   }
 }
  


printf("%d\n",a);
printf("%d",b);
	return 0;
}
