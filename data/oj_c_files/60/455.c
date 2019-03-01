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
	int n,i,j,k,a[10000]={0},*p;
	scanf("%d",&n);
    p=a;
	for(i=3;i<=n;i=i+2)
	{
		for(j=3;j<i;j++)
		{
			if(i%j==0)
				break;
		}
		if(j==i)
		{
			*p=i;
			p++;
		}
	}
	k=p-a;
	for(i=1;i<k;i++)
	{
		if(a[i]==a[i-1]+2)
			printf("%d %d\n",a[i-1],a[i]);
	}
	if(a[1]==0)
		printf("empty");
}
