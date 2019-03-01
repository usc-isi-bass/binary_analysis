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
	char c[300]={','};
   int n,i,num[300],a,b,s=0;
   for(i=0,n=0;;i++)
   {
      scanf("%d",&num[i]);
	  scanf("%c",&c[i]);
      n++;
	  if(c[i]=='\n')
		  break;
    }
    if(n==1)
      printf("No\n");
	else
	{
    a=num[0];
    for(i=1;i<=n-1;i++)
    {
       if(a<num[i])
          a=num[i];
       if(a==num[i])
          s++;
    }
    if(s==n-1)
      printf("No\n");
	else
	{
     for(i=0;i<=n-1;i++)
     {
         if(a!=num[i])
            b=num[i];
      }
      for(i=0;i<=n-1;i++)
      {
         if(a>num[i]&&b<=num[i])
            b=num[i];
       }
       printf("%d\n",b);
	   }
	   }
}