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
	int n,k,i,j,s=0;
	int a[1000];

	scanf("%d %d",&n,&k);

	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		if(i!=0)
		{
			for(j=0;j<i;j++)
			{
				if(k==(a[j]+a[i]))
				{
					s=1;
				}
			}
		}
	}

	if(s==1)
		printf("yes");
	if(s!=1)
		printf("no");

	return 0;
	
}
