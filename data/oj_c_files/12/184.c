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
	int a[100][20],i=0,j=0,k=0,num[100];
    
	do
	{
		j=0;
		do
		{
			scanf("%d",&a[i][j]);
			j++;
		}
		while ((a[i][j-1]!=0)&&(a[i][j-1]!=-1));
		i++;
	}
	while(a[i-1][0]!=-1);

	i=0;
    while(a[i][0]!=-1)
	{
		num[i]=0;
		k=0;
        while((a[i][k]!=0)&&(a[i][k]!=-1))
		{
			j=0;
			while((a[i][j]!=0)&&(a[i][j]!=-1))
			{
				if(a[i][k]==2*a[i][j])
				{
					num[i]++;
				}
				j++;
			}
			k++;
		}
		i++;
	}
	
	i=0;
	while(a[i][0]!=-1)
	{
		printf("%d\n",num[i]);
		i++;
	}

	return 1;
}
