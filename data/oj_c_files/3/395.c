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
	int n , k , a[1000] , YN = 0;
	scanf("%d%d",&n,&k);
	for(int i = 0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(int j = 0;j<n-1;j++)
	{
		for(int m = j;m<n;m++)
		{
			int he = a[j] + a[m];
			if(he == k)
			{
				YN = 1;
				break;
			}
		}
	}
	if(YN == 1)
		printf("yes");
	else if(YN == 0)
		printf("no");
	return 0;
}