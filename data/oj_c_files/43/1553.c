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
{int m,a,b,i,k,l;
scanf("%d",&m);
l=m/2;
for(a=3;a<=l;a+=2)
  {k=sqrt(a);
   for(i=2;i<=k;i++)
      if(a%i==0)  break;
   if(i>=k+1)
     {b=m-a;
     k=sqrt(b);
   for(i=2;i<=k;i++)
      if(b%i==0)  break;
   if(i>=k+1)
     printf("%d %d\n",a,b);}
   }
}