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
	char c[30],*a;
	int i,d;
	gets(c);
	d=strlen(c);
	for(a=c+0;a<=c+d-1;a++)
		{
			if(isdigit(*a))
			printf("%c",*a);
			else if(!isdigit(*a)&&a>(c+0)&&isdigit(*(a-1)))
				printf("\n");
	}
	return 0;
}