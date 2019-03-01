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
	int i;
	char a[100001],*p,e,l;
	gets(a);
	p=a;
	l=*p;
	for(i=0;i<strlen(a)-1;i++)
	{
		e=*(p+i);
		*(p+i)=e+*(p+i+1);
		printf("%c",*(p+i));
	}
	printf("%c",l+*(p+i));
}
