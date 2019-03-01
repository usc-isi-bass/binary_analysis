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
	char a[100],b[100];
	int i,j,k,l,m,n;
	gets(a);
	l=strlen(a);
	for (i=0;i<l;i++)
	{
		b[l-1-i]=a[i];
	}
	b[l]='\0';
	puts(b);
}