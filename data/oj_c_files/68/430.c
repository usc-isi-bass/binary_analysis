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
int n,m=6,a=3,b,i,j,k;
scanf("%d",&n);
while(m<=n)
{
   a=3;
   loop:
   b=m-a;
   j=sqrt(a);
   for(i=2;i<=j;i++)
   if(a%i==0) {a=a+2;goto loop;}
   if(i>=j+1)
    {k=sqrt(b);
     for(i=2;i<=k;i++)
     if(b%i==0) {a=a+2;goto loop;}
     if(i>=k+1)
     printf("%d=%d+%d\n",m,a,b);
     }
   m=m+2;
  }
}
