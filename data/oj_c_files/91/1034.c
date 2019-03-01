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
	char c[101],d[101]={0};
	int i;
	char *pc=gets(c);
	for(i=1;c[i]!=0;i++)
		d[i-1]=*(pc+i-1)+*(pc+i);
	d[i-1]=*(pc+i-1)+*pc;
	puts(d);
	return 0;
}