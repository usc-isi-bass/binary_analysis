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
	int a[100];
	int n,m;
	int i,j;
	int k;
	scanf("%d",&n);
	for (i=0;i<n;i++)
	{
		scanf("%d",&m);
		if (m==1 || m==2)
		{
			if (i==0)
			    printf("1\n");
			else
				printf("\n1\n");
		}
		else
		{
	        a[0]=1;
	        a[1]=2;
	        for (j=2;j<m-1;j++)
			{
		        a[j]=a[j-1]+a[j-2];
			}
			if (i==0)
	            printf("%d\n",a[m-2]);
			else
				printf("\n%d\n",a[m-2]);
		}
	}
}