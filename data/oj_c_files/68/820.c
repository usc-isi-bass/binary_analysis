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
  long prime(long x);
  long n,i,j;
  scanf("%d",&n);
  for(i=6;i<=n;i=i+2)
    for(j=3;j<=i/2;j=j+2)
     {
       if(prime(j)==1&&prime(i-j)==1)
       {printf("%ld=%ld+%ld\n",i,j,i-j);
        break;}
     }
}
 
long prime(long x)
{
    int flag;
    long i;
    if(x==2) 
      flag=1;
    if(x%2==0&&x!=2) 
      flag=0;
    if(x%2!=0)
   { 
        flag=1;
        for(i=3;i<=sqrt(x);i=i+2)
        {
        if(x%i==0)
          {
           flag=0;
           break;
          }
        }
   }
   return(flag);
}
 
