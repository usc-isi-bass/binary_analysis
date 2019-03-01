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
	char str[100],a,b;
	int i,j,n,k;
	scanf("%s",str);
	a=str[0];
	for(n=0;;n++)
	{
		if(str[n]!=a)
		{
			b=str[n];
			break;
		}
	}
	for(n=0;str[n]!='\0';)
	{
		n=n+1;
	}
	for(i=1;i<=n/2;i++)
	{
		for(j=0;j<n-1;j++)
		{
			if(str[j]==a)
			{
				for(k=j+1;;k++)
				{
					if(str[k]!='\0')
						break;
				}
				if(str[k]==b)
				{
					printf("%d %d\n",j,k);
					str[j]='\0';
					str[k]='\0';
					break;
				}
			}
		}
	}
	return 0;
}