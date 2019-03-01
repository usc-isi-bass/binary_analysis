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
	char a[102];
	char * p;
	char t;
	gets(a);
    t=a[0];
	for(p=a+1;*p!='\0';p++)
		*(p-1)=*(p-1)+*p;
	*(p-1)=*(p-1)+t;
	for(p=a;*p!='\0';p++)
		printf("%c",*p);

}
