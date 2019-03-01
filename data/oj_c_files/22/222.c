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
	int t,num[200],i=0,j,n;
	do
	{
		scanf("%d",&num[i]);i++;
	}
	while(getchar()!='\n');
	n=i;

	for(j=0;j<n;j++)
		for(i=0;i<n-j;i++)
		{
			if(num[i]<num[i+1])
			{
				t=num[i];
				num[i]=num[i+1];
				num[i+1]=t;
			}
		}
	t=num[0];
	for(i=0;i<n;i++)
	{
		if(num[i]<t) break;
	}
	if(i==n) puts("No");
	if(i<n) printf("%d",num[i]);
}