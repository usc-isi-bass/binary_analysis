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
	char *a,*p;
    int n=0;
	a=(char *)malloc(1000);
	gets(a);

	for(p=a;*p!='\0';p++);
	p--;
    for(;p>=a;p--)
		printf("%c",*p);
    

}