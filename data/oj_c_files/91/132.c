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
	int n,i;
	char a[300],b;
	gets(a);
	n=strlen(a);
	b=a[0];
	for(i=0;i<n-1;i++)
		*(a+i)=*(a+i)+*(a+i+1);
	*(a+n-1)=*(a+n-1)+b;
	puts(a);
}

