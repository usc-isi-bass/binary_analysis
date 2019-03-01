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

int a[1000001];
int main()
{
	int n,k,i,j;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	scanf("%d",&k);
	for(i=0;i<n;i++)
	{
		if(a[i]!=k)
		{
			printf("%d",a[i]);
			break;
		}
	}
    for(j=i+1;j<n;j++)
	{
		while((a[j]!=k)&&(j<n))
		{
			printf(" %d",a[j]);
			j++;
		}
		if(a[j]==k)
		{
			continue;
		}
	}
	return 0;
}






