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
	int n=0,a[300]={0},i,max1=0,max2=0,num=0,same=1;
	char c;
	while ((c=getchar())!='\n')
	{
		if (c==',') num=0;
		else if (num==1&&c!=',')
			a[n]=a[n]*10+c-'0';
		else if (num==0)
		{
			a[++n]=c-'0';
			num=1;
		}
		
	}

	if (n==1)goto end;
	for (i=1;i<n;i++)
	{
		if (a[i]!=a[i+1])
			same=0;
	}

	if (same) goto end;

	for (i=1;i<=n;i++)
	{
		if (a[i]>max1) 
			max1=a[i];
	}

	for (i=1;i<=n;i++)
	{
		if (a[i]<max1&&a[i]>max2) 
			max2=a[i];
	}

end:if (same) printf("No\n");
	else printf("%d\n",max2);
}