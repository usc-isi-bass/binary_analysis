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
	int n,k,i,j,a[10000],s;
	scanf("%d %d",&n,&k);
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	for(i=0;i<n;i++)
	{
		s=0;
		for(j=0;j<n-i;j++)
		{
			s=a[i]+a[j];
			if(s==k)
			{
				printf("yes\n");
				goto mq;
			}
		}
	}
mq:
	if(s!=k)
		printf("no\n");


}