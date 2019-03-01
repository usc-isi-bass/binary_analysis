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
	char a[2000];
	int i,j,k,c;
	for(i=0;i<=500;i++)
		a[i]='\0';
	gets(a);
	for(i=2;i<=500;i=i+2)
		for(j=0;j<=500;j++)
		{
			if(a[j]!='\0')
			{
				c=1;
				for(k=0;k<=i/2;k++)
				{
					if(a[j+k]!=a[j+i-k-1])
					{
						c=0;
						break;
					}
				}
			}
			if(c==1)
			{
				for(k=j;k<=j+i-1;k++)
					printf("%c",a[k]);
				printf("\n");
			}
		}
	return 0;
}