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
	char a[500];
	int i,j,k,x;
	gets(a);
	//i?????????
	for(i=2;i<=strlen(a);i++)
	{
		//j?????????
		for(j=0;j<=(strlen(a)-i);j++)
		{
			x=0;
			for(k=0;k<i;k++)
			{
				if(a[j+k]!=a[j+i-1-k])
				{
					x=1;
					break;
				}
			}
			if(x==0)
			{
				for(k=j;k<j+i;k++)
					printf("%c",a[k]);
			}
			printf("\n");
		}
	}
	return 0;
}
