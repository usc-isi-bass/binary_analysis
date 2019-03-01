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
	char *p,*p_1,*p2;
	p=(char*)malloc(1000*sizeof(char));
	p_1=p;
    gets(p);
	for(p=p_1;*p!='\0';p++)
		if(*p>='0'&&*p<='9')
			printf("%c",*p);
		else
		{
			for(p2=p;*p2!='\0';p2++)
				if(*p2>='0'&&*p2<='9')
				{
					printf("\n");
					break;
				}
		}
}