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
	int j;
	char a[13],b[5];
	while(scanf("%s%s",a,b)!=EOF)
	{
		int l=strlen(a);
		int k=0;
		for(j=0;j<l;j++)
		{
			if(a[j]>a[k]) k=j;
		}
		j=0;
		while(j<=k)
		{
			printf("%c",a[j]);
			j++;
		}
		printf("%s",b);
		while(j>k&&j<l)
		{
			printf("%c",a[j]);
			j++;
		}
		printf("\n");
	}
}