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
	char z[2050];
	gets(z);
	int i=0;
	int n=strlen(z);
	int record=0;
	int q=0;
	z[n]=' ';
	for(i=0;i<=n;i++)
	{
		if(z[i]==' ' && z[i-1] != ' ')
		{
			if(q==0)
			{
				printf("%d",record);
				q=1;
			}
			else
			{
				printf(",%d",record);
			}
			record=0;
		}
		else if(z[i] != ' ')
		{
			record++;
		}
	}
	return 0;
}