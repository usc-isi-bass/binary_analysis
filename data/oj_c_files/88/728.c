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
	char *p1;
	int i,j;
	char c=' ';
	p1=(char *)malloc(30*sizeof(char));
	gets(p1);
	for (i=0;i<(strlen(p1));i++)
	{
		if (isdigit(*(p1+i)))
			printf("%c",*(p1+i));
		else if ((isdigit(*(p1+i))==0)&&(isdigit(*(p1+i-1))!=0))
			printf("\n");
	}
	return 0;
}