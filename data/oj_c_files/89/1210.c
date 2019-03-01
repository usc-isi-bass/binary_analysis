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

main()
{
	int n,a[10002],b[10002],t[10002]={0},i,j,e;
	scanf("%d",&n);
	for(e=0;;e++)
	{
		scanf("%d %d",&a[e],&b[e]);
		if(a[e]==0&&b[e]==0)
		break;
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<e;j++)
		{
			if(a[j]!=i&&b[j]==i)
			t[i]++;
		}
	}
	for(i=0;i<n;i++)
	{
		if(t[i]==n-1)
		{
			printf("%d\n",i);
			break;
		}
		else if(t[i]!=n-1&&i==n-1)
		printf("NOT FOUND");
	}
} 