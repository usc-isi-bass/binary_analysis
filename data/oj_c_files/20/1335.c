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
	char str[11],substr[4],max;
	int i,k,l;
	while(scanf("%s %s",str,substr)!=EOF)
	{
		k=0;
		l=strlen(str);
		max=str[0];
		for(i=1;i<l;i++)
		{
			if(str[i]>max)
			{
				max=str[i];
				k=i;
			}
		}
		for(i=0;i<l;i++)
		{
			if(i==k)
			{
				printf("%c",str[i]);
				printf("%s",substr);
			}
			else
			{
				printf("%c",str[i]);
			}
		}
		printf("\n");
	}
	return 0;
}
