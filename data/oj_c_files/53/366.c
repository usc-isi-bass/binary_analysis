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

main()
{
	int a[300]={0},b[300]={0};
	int *p,*q;
	int n,i,j,m;
	scanf("%d",&n);
	for (i=0;i<n;i++)
		scanf("%d",&a[i]);
	p=a;
	q=b;
	for(i=0;i<n;i++)
	{
		if (*(q+i))
			continue;
		m=0;
		for (j=0;j<n;j++)
		{
			if (*(q+j))
				continue;
			if (*(p+i)==*(p+j))
			{
				m++;
			    if (m>1)
				    *(q+j)=1;
			}
		}
	}
	for (i=0;i<n;i++)
	{
		if (*(q+i))
			continue;
		if (i)
			printf(",");
		printf("%d",*(p+i));
	}
	printf("\n");
}