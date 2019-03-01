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
 int x,i,j,m,f,k;
 
 
 scanf("%d",&x);
 for(k=6;k<=x;k=k+2)
 {
 if((k%2==0)&&(x>=6))
 {
  for(i=3;i<=k/2;i+=2)
  {
   f=1;
   for(j=2;j<=sqrt(i);j++)
   {
    if(i%j==0)
    {
     f=0;
     break;
    }
   }
   if(f==1)
    m=k-i;
   for(j=2;j<=sqrt(m);j++)
    { 
        if(m%j==0)
     {
      f=0;
      break;
     }
    }
    if(f==1)
    {
     printf("%d=%d+%d\n",k,i,m);
     break;
    }
  }
  }
 }
 
 getchar();
} 