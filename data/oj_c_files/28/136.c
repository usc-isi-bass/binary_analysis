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
	char a[10001];
	int i,j,k,flag;
	char c;
	i=0;
	while((c=getchar())!='\n')
	{
		a[i]=c;
		i++;
	}
	a[i]=' ';
	flag=1;
	for(j=0;j<i;j++)
	{
		if (flag==1)
		{
		if (a[j]!=' ')
		{
			k=0;
			while(a[j+k]!=' ')
			{
				k++;
			}
			printf("%d",k);
			j=j+k;
			flag=0;
		}
		}
		else
		{
			if (a[j]!=' ')
		{
			k=0;
			while(a[j+k]!=' ')
			{
				k++;
			}
			printf(",%d",k);
			j=j+k;
		}
		}
	}
}