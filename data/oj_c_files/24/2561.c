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
	char a[200][20];
	int i,n,max=0,min=20;
	int b[200];
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%s",a[i]);
		b[i]=strlen(a[i]);

	}
	for(i=0;i<n;i++)
	{
		if(max<b[i]) max=b[i];
		if(min>b[i]) min=b[i];
	}
	for(i=0;i<n;i++)
	{
		if(b[i]==max)
		{
			printf("%s\n",a[i]);
			break;
		}
	}
		for(i=0;i<n;i++)
	{
		if(b[i]==min)
		{
			printf("%s\n",a[i]);
			break;
		}
	}
	return 0;
}
