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
       int a[300];
       int i=0,n,max,max2;
	   char c=',';
	   while(c==',')
	   {
		   scanf("%d%c",&a[i],&c);
		   i++;
		   }
	   n=i;
		   
			   max=a[0];
		   for(i=0;i<n;i++)
			 if(a[i]>max) max=a[i];
			else continue;
				max2=0;
			for(i=0;i<n;i++)
			if(a[i]<max&&a[i]>max2)
				max2=a[i];
			else continue;
			if(max2>0)	
			printf("%d",max2);
			else printf("No");
		

return 0;
}

