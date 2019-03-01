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
    gets(p);;
	for(p=p_1;*p!='\0';p++)
		if(*p==' ')
			if(*(p2=(p+1))==' ')
			{
				for(;*p2!='\0';p2++)
					*p2=*(p2+1);
				p--;
			}
	for(p=p_1;*p!='\0';p++)
		printf("%c",*p);
}
