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
	int a[15];
	int t,s,i,j,n;
	scanf("%d",&t);
	while (t!=-1)
	{
		s=0;
		n=0;
		a[s]=t;
		scanf("%d",&t);
		while (t!=0)
		{
			s++;
			a[s]=t;
			scanf("%d",&t);
		}
		i=0;
		for (i;i<s;i++)
		{
			j=i+1;
			for (j;j<=s;j++)
			{
				if ((a[i]==a[j]*2)||(a[j]==a[i]*2))
					n++;
			}
		}
		printf("%d",n);
		printf("\n");
		scanf("%d",&t);
	}
}
