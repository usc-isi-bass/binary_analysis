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
	int n,k,a[1000],f=0;
	scanf("%d %d",&n,&k);
	scanf("%d",&a[0]);
	for(int i=1;i<n;i++)
	{
		scanf("%d",&a[i]);
		for(int j=0;j<i;j++)
		{
			if(a[j]+a[i]==k)
			{
				f=1;
			}
		}
	}
	if(f==1)
	{
		printf("yes");
	}
	else
	{
		printf("no");
	}
	return 0;
}
