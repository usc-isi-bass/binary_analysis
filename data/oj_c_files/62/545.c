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
	char *p,c;
	int i;
	p=(char *)malloc(sizeof(char));
	for(i=0;;i++)
	{
		scanf("%c",&c);
		if(c=='\n')
		{
			*(p+i)='\0';
			break;
		}
		else
		{
			*(p+i)=c;
		}
	}
	for(i=0;;i++)
	{
		c=*(p+i);
		if(c=='\0')
		{
			break;
		}
		else if(c!=' ')
		{
			printf("%c",c);
		}
		else if(c==' '&&*(p+i-1)!=' ')
		{
			printf("%c",c);
		}
	}
	return 0;
}