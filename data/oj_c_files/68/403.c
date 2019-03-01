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
 int i,j,k,t,n;
 scanf("%d",&n);
 for(i=6;i<=n;i=i+2)
  if(i%2==0)
   {
    for(j=3;j<=(int)(i/2);j++)
    {
     for(k=2;k<=sqrt(j);k++)
      if(j%k==0) break;
     if(k>sqrt(j))
       {
        for(t=2;t<=sqrt(i-j);t++)
         if((i-j)%t==0) break;    
        }
      if(k>sqrt(j)&&t>sqrt(i-j))
	  {printf("%d=%d+%d\n",i,j,i-j);break;}
     }
    }
}


