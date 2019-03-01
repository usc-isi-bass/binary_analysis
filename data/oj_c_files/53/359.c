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
	int i,k=0,n,s,f;
	int a[1000];
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		if(k==0)
		{
			printf("%d",a[0]);
			k=1;
		}
		for(s=0;s<i;s++)
		{
			if(a[i]==a[s])
			{
				f=0;
				break;
			}
			else 
			{
				f=1;
			}

		}
		if(f==1)printf(",%d",a[i]);
	}
	printf("\n");
}