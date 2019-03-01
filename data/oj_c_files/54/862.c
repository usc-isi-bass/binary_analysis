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
   int n,k,m,i=1,j;
   scanf("%d %d",&n,&k);
   while(i>=0)
   {m=n*i+k;
   for(j=2;j<=n+1;j++)
   { if(j==n+1)
        break;
     if(m%(n-1)!=0)
       break;
     else
       m=m*n/(n-1)+k;
    }
   if(j==n+1)
   {printf("%d",m);
   break;}
   else
       i++;
    }
}