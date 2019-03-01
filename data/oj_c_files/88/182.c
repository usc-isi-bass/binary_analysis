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
	int l;
	char *a,*p;
	a=(char*)malloc(30*sizeof(int));
	gets(a);

	l=strlen(a);
	for(p=a;p<a+l;p++)
	{
		if((*p>=48)&&(*p<=57))
		{
			printf("%c",*p);
		}
		else
		{
			printf("\n");
		}
	}
	printf("\n");
}
