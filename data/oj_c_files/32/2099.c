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
	int j,n,la,lb,i;
	char a[101];
	char b[101];
    
    
	
	
	scanf("%d",&n);
	for(j=0;j<n;j++)
	{
		scanf("%s",a);
		scanf("%s",b);
		la=strlen(a);
		lb=strlen(b);
		for(i=0;i<lb;i++)
		{
			if(a[la-1-i]>=b[lb-1-i])
				a[la-1-i]=a[la-1-i]-b[lb-1-i]+'0';
			else if(a[la-1-i]<b[lb-1-i])
			{
				a[la-1-i]=a[la-1-i]+10-b[lb-1-i]+'0';
				a[la-2-i]=a[la-2-i]-1;
			}
			
		}
	printf("%s\n",a);	
	}
}
