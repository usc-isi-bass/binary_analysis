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
	int a[20000];
	int i=0,n,j,k,m=1;
	scanf("%d",&n);
	for(k=0;k<n;k++)
		scanf("%d",&a[k]);
	k=0;
	while(i<n)
	{
		for(j=0;j<i;)
		{
			if(a[i]==a[j])
			{
				m=0;
				break;
			}
			else j++;
		}
		if(m==1)
		{
			a[k]=a[i];
			i++,k++;
		}
		else i++,m=1;
	}
	for(i=0;i<(k-1);i++)
		printf("%d ",a[i]);
	printf("%d\n",a[k-1]);
}