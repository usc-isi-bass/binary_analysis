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
	char str[20],substr[5],max;
	int a,b,i,flag;
	while(scanf("%s%s",str,substr)!=EOF)
	{
		max=0;
		a=strlen(str);
		b=strlen(substr);
		for(i=0;i<a;i++)
		{
			if(str[i]>max) max=str[i];
		}
		flag=1;
		for(i=0;i<a;i++)
		{
			if(str[i]<max) printf("%c",str[i]);
			else
			{
				printf("%c",max);if(flag==1) printf("%s",substr);flag=0;
			}
		}
		printf("\n");
	}
	return 0;
}