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
	int i,j,a[1000],t=0,q=0,max,min,b[1000];
	for(i=0;;i++)
	{	
		if(scanf("%d,",&a[i])==EOF)
		break;
	}
	max=a[0];
	for(j=0;j<i;j++)
	{
		if(a[j]>max)
			max=a[j];
	}
	for(j=0;j<i;j++)
	{
		if(a[j]==max)
			t++;
	}
	if(t==i)
		printf("No");
	else
	{
		for(j=0;j<i;j++)
		{
			if(a[j]!=max)
			{
				b[q]=a[j];
				q++;
			}
		}
		min=b[0];
		for(j=0;j<=q;j++)
			if(b[j]>min)
				min=b[j];
		printf("%d",min);
	}
}