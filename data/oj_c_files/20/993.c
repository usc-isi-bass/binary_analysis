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


int main(int argc, char* argv[])
{
	int max,i,j,e,k;
	char str[11],substr[4];
	for(;;)
	{
		max=0;
		if(scanf("%s%s",str,substr)!=EOF)
		{
			for(i=0;str[i];i++)
			{
				if(str[i]>max)
				{
					max=str[i];
					e=i;
				}
			}
			for(j=0;j<e+1;j++)
			{
				printf("%c",str[j]);
			}
			printf("%s",substr);
			for(k=e+1;str[k];k++)
				printf("%c",str[k]);
			printf("\n");
		}
		else
			break;
	}
			return 0;
		}