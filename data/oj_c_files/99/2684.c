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
	int n,i,a[10000],b,c,d,e;
	scanf("%d",&n);
		for(i=0;i<n;i++)
			scanf("%d",&a[i]);
		b=0;c=0;d=0;e=0;
		for(i=0;i<n;i++)
		
		{
			
			if (a[i]<=18)
				b=b++;
		    
			else if(a[i]>18&&a[i]<=35)
			c++;
			
			else if(a[i]>35&&a[i]<=60)
				d++;
			else e++;
		}
		printf("1-18: %.2f%\n",(float)b/n*100);
        printf("19-35: %.2f%\n",(float)c/n*100);
        printf("36-60: %.2f%\n",(float)d/n*100);
        printf("60??: %.2f%\n",(float)e/n*100);
}