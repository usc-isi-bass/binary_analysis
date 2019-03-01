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
	char *juzi[1000];
	char **p;

	p=juzi;
	*p=(char *)malloc(100*sizeof(char));
	gets(*p);
	while(strcmp(*p,"end")!=0)
	{
		p++;
		*p=(char *)malloc(100*sizeof(char));
		gets(*p);
	
	}
    p--;
	for(;p>=juzi;p--)
		puts(*p);

}