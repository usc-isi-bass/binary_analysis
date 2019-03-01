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
	char c[1000];
	char *str=c;
	int flag,k;
	flag=1;
	k=0;
	gets(str);
	while(*str)
	{
		if((*str>='0'&&*str<='9')&&(flag==0)&&(k>0))
			printf("\n");
		if(*str>='0'&&*str<='9')
		{
			printf("%c",*str);
			flag=1;
			k++;
		}
		else
		{
			flag=0;
		}
		str++;

	}
	
		return 0;
}