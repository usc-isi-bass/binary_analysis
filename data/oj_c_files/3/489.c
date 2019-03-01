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
	int n,k,i,j,p=0;
	int a[1000];
	scanf("%d %d",&n,&k);
    for(i=0;i<n;i++)
		scanf("%d",&a[i]);
    for(i=0;i<n;i++)
	{
		for(j=1;j<n;j++)
		{
			if((a[i]+a[j])==k)
			{
				p=1;
				break;
			}
		}
		if(p==1)
			break;
	}
			if(p==1)
				printf("yes");
			else
				printf("no");
}