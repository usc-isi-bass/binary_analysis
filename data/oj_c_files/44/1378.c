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

int reverse(int num)
{
 int f=1,s=0;
 if (num<0)
   {
   f=0;
   num=-num;
   }
 for (;num!=0;)
   {
   s=s*10+num%10;
   num=num/10;
   }
 if (f==0)
   s=-s;
 return(s);
}
void main()
{
 int i,n;
 for (i=1;i<=6;i++)
   {
   scanf("%d",&n);
   printf("%d\n",reverse(n));
   }
}