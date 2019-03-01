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
	int b,i=0,j,t,n=0;
	scanf("%d",&b);
	while(b>0&&i<=4)
	{
		a[i]=b%10;
		b=b/10;
		i++;
		n++;
	}
	for(j=0;j<n;j++)
		for(;i<n-j;i++)
			if (a[i]>a[i+1])
			{
				t=a[i];
				a[i]=a[i+1];
				a[i+1]=t;
			}
			for(i=0;i<n;i++)
				printf("%d",a[i]);
}

		