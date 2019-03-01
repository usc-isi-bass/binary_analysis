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
	int n,i,j,k;
	int a[300],b[300];
	scanf("%d",&n);
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	b[0]=a[0];
	k=1;
	i=0;
loop:for(;i<n;i++)
	{
		for(j=0;j<k;j++)
		{
			if(a[i]==b[j])
			{
				i++;
				goto loop;
			}
		}
		if(j==k)
		{
			b[k]=a[i];
			k++;
		}
	}
	for(i=0;i<k-1;i++)
		printf("%d,",b[i]);
	printf("%d\n",b[k-1]);
	return 0;
}