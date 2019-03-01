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
	char *p=(char*)malloc(31*sizeof(char));
	gets(p);
	for(;*p!='\0';p++)
	{if(*p>47&&*p<58)printf("%c",*p);
		if((*(p-1)>47&&*(p-1)<58)&&(*p<48||*p>57))
			printf("\n");}
}

