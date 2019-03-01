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

int main ()
{
	int n,p=0;
	scanf("%d",&n);
	int a[10000];
	for(int i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("%d",a[0]);
	for(int k=1;k<n;k++)
	{
		for(int m=0;m<k;m++)
		{
			if(a[k]==a[m])
			{
				p=1;
				break;
			}
		}
		if(p==0)
			{
			printf(",%d",a[k]);
			}
		else
			{
				p=0;
			}
	}
	return 0;
}
