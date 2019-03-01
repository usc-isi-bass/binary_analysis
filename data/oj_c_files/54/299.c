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


main()
{
int n,k,i,m,j;
scanf("%d%d",&n,&k); 
for(i=n+k;;i++)
{
   m=i;
   for(j=1;j<=n;j++)
   {
    if((m-k)%n!=0||m-k<=0)  break;
    else m=(m-k)/n*(n-1);
      if(j==n)
      {
           printf("%d",i);
           goto loop;
      }
      
   }
}
loop: printf("\n");
}
