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
    int k, sz[number][2], i, j, mc=0, n, a, b;
	scanf("%d", &n);
	for(i=0;1;i++)
	{
		scanf("%d%d", &a, &b);
		if(a==0&&b==0)
			break;
		else
		{
			sz[a][0]++;
			sz[b][1]++;
		}
	}
    for(i=0;i<n;i++)
	{
		if(sz[i][0]==0&&sz[i][1]==n-1)
		{
			printf("%d\n", i);
			mc++;
		}
	}
	if(mc==0)
		printf("NOT FOUND");
	return 0;
}