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
	unsigned int a[300],t,n,j;
	int i;
	char s;
	for(n=0;;n++)
	{
		scanf("%d%c",&a[n],&s);
		if(s!=',')
			break;
	}
	for(i=n;i>=1;i--)
	{
		for(j=0;j<i;j++)
		{
			if(a[j]>a[j+1])
			{
				t=a[j];
				a[j]=a[j+1];
				a[j+1]=t;
			}
		}
	}
	for(i=n-1;a[i]==a[i+1]&&i>=0;i--);
	if(i==-1)
		printf("No\n");
	else
		printf("%d\n",a[i]);
}