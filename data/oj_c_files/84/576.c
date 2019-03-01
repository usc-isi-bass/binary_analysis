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
    int i,n,x,a,b,t,m,c;
    int s[100];
    scanf("%d",&n);
    for(i=0;i<n;i++)
	{
		scanf("%d",&s[i]);
	}
    if(s[0]<s[1])
    {
       a=s[1];
       b=s[0];
     }
     else
     {
       a=s[0];
       b=s[1];
      }
     for(i=2;i<n;i++)
     {
        if(s[i]<b) continue;
        if(s[i]>b&&s[i]<a)
        {
           t=s[i];
           s[i]=b;
           b=t;
         }
         else
         {
            m=s[i];
            s[i]=a;
            a=m;
            c=s[i];
            s[i]=b;
            b=c;
          }
       }
       printf("%d\n%d\n",a,b);
       return 0;
}
