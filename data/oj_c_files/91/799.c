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
	p=(char *)malloc(1000*sizeof(char));
	gets(p);
	int i;
	int L=strlen(p);
	for(i=0;i<L-1;i++)
		printf("%c",*(p+i)+*(p+i+1));
	printf("%c\n",*(p+L-1)+*p);
}

