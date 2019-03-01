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
	unsigned int num[300]={0},i=0,j,k,n,t;
	do 
	{
		scanf("%d",&num[i]);
		i++;
	}
    while (getchar()==',');
	n=i;
	if (n==1)
		printf("No\n");
	else 
	{
		for (i=0;i<n;i++)
		{
			k=i;
			for (j=i+1;j<n;j++)
				if (num[k]<num[j])
					k=j;
			if (k!=i)
			{
				t=num[k];
				num[k]=num[i];
				num[i]=t;
			}
		}
		for (i=1;i<n;i++)
			if (num[i]<num[0])
			{	
				j=i;
			    break;
			}
		if (i==n)
			printf("No\n");
		else printf("%d\n",num[j]);
	}
}
