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
	int a[600],b[600];
	int i,j,n,m,max,second;
	char c=',';
	for(i=0;c!='\0'&&c!='\n';i++)
	{
		scanf("%d%c",&a[i],&c);
	}
	max=a[0];
	n=i;
	j=0;
	for(i=1;i<n;i++)
	{
		if(max<a[i])
			max=a[i];
	}
	for(i=0;i<n;i++)
	{
		if(a[i]!=max)
		{
			b[j]=a[i];
			j++;
		}
	}
	m=j;
	if(m==0)
		printf("No");
	else
	{
		second=b[0];
		for(j=1;j<m;j++)
		{
			if(second<b[j])
				second=b[j];
		}
		printf("%d",second);
	}
	return 0;
}