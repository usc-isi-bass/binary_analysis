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

void main()
{
	char str[10000],*p=str;
	int n,len;
	gets(str);
	n=strlen(str);
	for(len=0;*p;p++)
	{
		if(*p==' ')continue;
		else
		{
			len++;
			if(*(p+1)==' '||*(p+1)=='\0')
			{
				printf("%d",len);
				if(*(p+1)!='\0')printf(",");
				len=0;
			}
		}
	}
}
