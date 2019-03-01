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
	char a[100],b[100];
	char *p;
	int i=0;
	scanf("%s %s",a,b);
	p=b;
	while(p!=strstr(b,a))
	{p++;
	i++;}
	printf("%d\n",i);
	
	return 0;
}