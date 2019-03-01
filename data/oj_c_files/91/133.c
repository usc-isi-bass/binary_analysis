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
	int n;
	char a[300],b,*p;
	gets(a);
	n=strlen(a);
	b=*a;
	for(p=a;*(p+1)!='\0';p++)
		*p=*p+*(p+1);
	*p+=b;
	puts(a);
}


