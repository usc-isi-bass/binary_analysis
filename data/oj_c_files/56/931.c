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
	int a[5];
	int b,i,n;
	scanf("%d",&b);
    for(i=0;i<5;i++)
	{
		a[i]=b%10;
		b=(b-(b%10))/10;
	}
	for(n=4;;n--)
	{
		if(a[n]==0)
			continue;
		else break;
	}
	for(i=0;i<=n;i++)
	{
		printf("%d",a[i]);
	}	
	printf("\n");
}

