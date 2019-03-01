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
	int n,i,k,a[400];
	for(i=0;i<400;i++)
		a[i]=10000;
	scanf("%d",&n);
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	for(i=0;i<n;i++)
	{
		if(a[i]!=10000)
		for(k=i+1;k<n;k++)
		{
			if(a[k]==a[i])a[k]=10000;
		}
		else continue;
	}
	int h=0;
	for(i=0;i<n;i++)
		if(a[i]!=10000)h++;
	for(i=0;i<n;i++)
	{
		if(a[i]!=10000){printf("%d",a[i]);h--;if(h)printf(",");}	
	}
	return 0;
}