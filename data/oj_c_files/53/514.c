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
	int i,j,max,n;
	char num[300],b[300];
	scanf("%d",&n);
    for(i=0;i<n;i++)
		scanf("%d",&num[i]);
	for(i=1;i<n;i++)
	{
		for(j=1;j<=i;j++)
		{
		if(num[i]==num[i-j])b[i]=1;
       
		}

	}
	for(i=0;i<n;i++)
	{
		if(b[i]!=1)max=i;
	}
	for(i=0;i<n;i++)
	{
		if(b[i]!=1)
{
			if(i<max)printf("%d,",num[i]);
			else if(i=max)printf("%d",num[i]);
		}
	}
}