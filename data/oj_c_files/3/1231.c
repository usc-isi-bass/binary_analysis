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
   int n,k;
   scanf("%d%d",&n,&k);
   int sz[N];
   int i,m=0,p=0;
   for(i=0;i<n;i++)
   {
	   scanf("%d",&sz[i]);
   }
   int j;
   for(i=0;i<n-1;i++)
   {
       for(j=i+1;j<n;j++)
	   {
		   if(sz[i]+sz[j]==k)
		   {
			   printf("yes");
               p=1;
			   break;
		   }
		   else 
		   {
			   m++;
		   }
		}
           if(p==1)
			{
		     	break;
			}
   }
           
   if(p==0)
		   {
			   printf("no");
		   }
 return 0;
}

