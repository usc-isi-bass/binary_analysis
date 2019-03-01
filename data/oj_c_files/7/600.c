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
	int n,i,j,k,m=0;
	char a[256],b[256],c[256];

	gets(a);
	gets(b);
	gets(c);

	n=strlen(a);
	k=strlen(b);

	i=strstr(a,b)-a;

	if(i>=0&&i<=n-k)
	{
		for(j=0;j<i;j++)
		{
			printf("%c",a[j]);
		}
		for(j=0;j<k;j++)
		{
			printf("%c",c[j]);
		}
		for(j=i+k;j<n;j++)
		{
			printf("%c",a[j]);
		}
	}
	else
	{
		for(i=0;i<n;i++)
		{
			printf("%c",a[i]);
		}
	}
	printf("\n");
	return 0;
}
