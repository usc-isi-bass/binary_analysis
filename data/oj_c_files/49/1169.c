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

void hw(char a[],int n)
{
	int i,j,k,h=0;
	for(i=2;i<=n;i++)
	{
		for(j=0;j<=n-i;j++)
		{
			for(k=0;k<i;k++)
			{
				if(a[j+k]==a[j+i-k-1])
				{
					h=1;
				}
				else
				{
					h=0;
					break;
				}
			}
			if(h==1)
			{
				for(h=j;h<j+i;h++)
				printf("%c",a[h]);
				printf("\n");
				h=0;
			}
		}
	}
}
int main()
{
	int n;
	char a[500];
	scanf("%s",a);
	n=strlen(a);
	hw(a,n);
	return 0;
}