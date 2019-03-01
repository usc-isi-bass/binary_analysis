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
	char p[1000][30];
	int i,n=0;
	int sum[1000];
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%s",p[i]);
		sum[i]=strlen(p[i]);
	}
	int count=0;
	for(i=0;i<n;i++)
	{
		if(count==0)
		{
			printf("%s",p[i]);
			count=count+sum[i];
		}
		else if(count+sum[i]<80)
		{
			printf(" %s",p[i]);
			count=count+sum[i]+1;
		}
		else if(count+sum[i]>=80)
		{
			printf("\n");
			count=sum[i];
			printf("%s",p[i]);
		}
	}
}