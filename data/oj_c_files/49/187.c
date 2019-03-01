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
	int i,j,k,m;
	gets(a);
	int len=strlen(a);
	for(i=2;i<=len;i++)
	{
		for(j=0;j<=len-i;j++)
		{
			for(k=0;k<i;k++)
			{
				if(a[j+k]!=a[j+i-1-k])
					break;
			}
			if(k==i)
			{
				for(m=0;m<i;m++)
					putchar(a[j+m]);
				printf("\n");
			}
		}
	}
	return 0;
}