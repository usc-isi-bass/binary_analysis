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
	int n,i,a[300],b[300]={0},j=1,m,k;
	scanf("%d",&n);
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	b[0]=a[0];
	for(i=0;i<n;i++)
	{
		m=0;
		for(k=0;k<j;k++)
		{
			if(a[i]==b[k])
			{
				m=1;
				break;
			}
		}
		if(m==0)
		{
			b[j]=a[i];
			j++;
		}
	}
	if(j==1)
		printf("%d",b[0]);
	else
	{
		printf("%d",b[0]);
		for(k=1;k<j;k++)
			printf(",%d",b[k]);
	}
}