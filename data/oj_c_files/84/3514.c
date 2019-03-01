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
	   int n;
	   scanf("%d",&n);
	   int a[100],b=0,i=0,j=0;
	   for(i=1;i<=n;i++)
		   scanf("%d",&a[i]);
	    for(j=1;j<=n;j++)
		{
			for(i=1;i<=n-j;i++)
			{
				if (a[i]<a[i+1])
				{
					b=a[i];
					a[i]=a[i+1];
					a[i+1]=b;
				}
			}
		}
		for (i=1;i<=n;i++);

	    printf("%d\n",a[1]);
        printf("%d\n",a[2]);
		return 0;
   }