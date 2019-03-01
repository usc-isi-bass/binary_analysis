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
	int n,i,j,k;
	int a[10000];

	scanf("%d",&n);
	for(i=3,k=0;i<=n;i++)
	{
		for(j=2;j<i;j++)
			if(i%j==0)
				break;
		if(i<=j)
		{a[k]=i;k++;}

	}

	for(i=0,j=0;i<k;i++)
	if(a[i+1]-a[i]==2)
	{printf("%d %d\n",a[i],a[i+1]);j++;}
if(j==0)
		printf("empty");
}