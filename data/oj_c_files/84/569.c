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
   int k,i,e;
   int a[100];
   scanf("%d",&k);
   for(i=0;i<k;i++)
   {
	   scanf("%d",&a[i]);
   }
   for(i=0;i<k-1;i++)
	{
	   if(a[i]>a[i+1])
	   {
		   e=a[i+1],a[i+1]=a[i],a[i]=e;
	   }
   }

    for(i=0;i<k-2;i++)
	 {
	   if(a[i]>a[i+1])
	   {
		   e=a[i+1];
		   a[i+1]=a[i];
		   a[i]=e;
	   }
	}
	printf("%d\n",a[k-1]);
    printf("%d\n",a[k-2]);
	
    return 0;
}