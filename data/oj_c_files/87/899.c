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
	int i=0,count=0;
	int sum=0;
	int a[1000],b[1000],c[1000],d[1000],e[1000],f[1000];
	while(1)
	{
		scanf("%d%d%d%d%d%d",&a[i],&b[i],&c[i],&d[i],&e[i],&f[i]);
		count++;
		if(a[i]==0&&b[i]==0&&c[i]==0&&d[i]==0&&e[i]==0&&f[i]==0)
			break;
		i++;
	}
	for(i=0;i<count-1;i++)
	{
		sum=3600*(12+d[i]-a[i])+60*(e[i]-b[i])+(f[i]-c[i]);
		printf("%d\n",sum);
	}
	return 0;
}

