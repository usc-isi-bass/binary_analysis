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

int main ()
{
   char a[500],b[500],c[500];
   int i,k,j,l,m,h,x;
   gets(a);
   int n=strlen(a);
  
   for(i=1;i<n;i++)
    for(j=0;j<n-i;j++)
	{
	    m=0;
		x=0;
		for(k=j;k<=j+i;k++)
		{
			b[m]=a[k];
			m++;
		}
		for(l=0;l<m;l++)
		{
			c[l]=b[m-1-l];
		}
		for(h=0;h<m;h++)
		{
			if(b[h]!=c[h])
             x++;
			else x=x;
		}
		if(x==0)
		{
			for(k=j;k<=j+i;k++)
			printf("%c",a[k]);
			printf("\n");
		}
	}
   return 0;
}
