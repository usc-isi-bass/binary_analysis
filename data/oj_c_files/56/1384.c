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
	char a[5],b[5];
	int i,j;
	gets(a);
	int length=(int)strlen(a);
	for(i=length-1,j=0;i>=0;i--,j++)
		b[j]=a[i];
	b[j]='\0';
	puts(b);
	return 0;
}
