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
	int a[100000],n,k,i,j;
	scanf("%d",&n);
	for(i=0;i<=n-1;i++)
		scanf("%d",&a[i]);
	scanf("%d",&k);
    for(i=0;i<=n-1;i++)
	{	if(a[i]!=k)
		{printf("%d",a[i]);
		break;}
	}
		for(j=i+1;j<=n-1;j++)
		{if(a[j]!=k)printf(" %d",a[j]);
		}
}