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
	int k,i;
	char*p;
	p=(char*)malloc(30*sizeof(char));
	gets(p);
	for(k=0,i=0;*(p+i)!='\0';i++)
	{
		if((*(p+i)>='0')&&(*(p+i)<='9'))
		{
			printf("%c",*(p+i));
			k=1;
		}
		if((k=1)&&!((*(p+i)>='0')&&(*(p+i)<='9')))
		{
			printf("\n");
			k=0;
		}
	}
}