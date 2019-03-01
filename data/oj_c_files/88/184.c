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
	char *p;
	char a[30];
	p=(char*)malloc(30*sizeof(char));
	gets(a);
	p=a;
	for(p=a;*p!='\0';p++)
		if(*p>=48&&*p<=57)
		{
			printf("%c",*p);
			if(*(p+1)<48||*(p+1)>57)
			{
				printf("\n");
			}
		}
}