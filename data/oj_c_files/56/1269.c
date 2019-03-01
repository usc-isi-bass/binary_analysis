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
	char str[80],*p,*q,t;
	scanf("%s", str);
	for(p=str,q=p+strlen(str)-1;p<q;p++,q--)
	{
		t=*p;
		*p=*q;
		*q=t;
	}
	printf("%s", str);
	return 0;
}