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
	int n,i;
	int a[100000];
	scanf("%d/n",&n);
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	printf("%d",a[0]);
	i=1;
	while(i<n)
	{
		int j=0,x=0;
		while(j<i)
		{
			if(a[i]==a[j])
			{
				x=1;
				break;
			}
			j++;
		}
		if(x==0)
		printf(" %d",a[i]);
		i++;
	}
}

