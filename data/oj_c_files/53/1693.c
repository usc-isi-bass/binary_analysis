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
	int a[300],i,n,j,b[300];
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		b[i]=a[i];
	}
loop:for(i=1;i<n-1;i++)
	{
		for(j=i-1;j>=0;j--)
		{

		    if(a[i]==b[j])
			{
				for(;i<n-1;i++)
				{ 
			        a[i]=a[i+1];
					b[i]=a[i];
					
				}	
				n--;
				goto loop;
			}
		}
	}
	 for(i=0;i<n-1;i++)
	 {
		 if(a[n-1]==a[i])
			 n--;
	 }
	 if(n==1)
		 printf("%d",a[0]);
	 else
	 {
		 printf("%d",a[0]);
	     for(i=1;i<n;i++)
		 {
		      printf(",%d",a[i]);
		 }
	 }
	return 0;
}