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
	int a[100],i,n,j,temp;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
		scanf("%d",&a[i]);
	for(j=1;j<=2;j++)
	{
		for(i=2;i<=n;i++)
		{
			if(a[j]<a[i])
			{
				temp=a[j];
			    a[j]=a[i];
			    a[i]=temp;
			}
		}
	}
	printf("%d\n%d",a[1],a[2]);
}