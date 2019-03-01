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
	int i,j,k,c;
	k = 0;
	c = 1;
	signed int b;
	signed int a[100000];
    scanf("%d",&i);
	for(j=0;j<i;j++)
    scanf("%d",&a[j]);
	scanf("%d",&b);
    for(j=0;j<i;j++)
	{
		if (a[j]!=b)
			k++;
			//printf("%d ",a[j]);
	}
	//printf("%d ",k);
	for(j=0;j<i;j++)
	{
		if (a[j]!=b)
		{
			if (c<k)
			{
				printf("%d ",a[j]);
				c++;
			}
			else
				printf("%d",a[j]);
		}
	}
}