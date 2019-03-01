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
   char z1[51],z2[51];
   scanf("%s %s",z1,z2);
   int p,q;
   p=strlen(z1);
   q=strlen(z2);
   int i;
   int g[51],h[51];
   for(i=0;i<p;i++)
   {
	   g[i]=z1[i];
   }
   int j;
   for(j=0;j<q;j++)
   {
	   h[j]=z2[j];
   }
   int x,m;
   for(x=0;x<p;x++)
   {
	   int k;
	   for(k=0;k<q;k++)
	   {
		   if(h[k]==g[x])
		   {
			   if(h[k+1]==g[x+1])
			   {
				   printf("%d",k);
                   m=0;
				   break;
			   }

		   }
	   }
	   if(m==0)
	   break;
   }
   return 0;
}
