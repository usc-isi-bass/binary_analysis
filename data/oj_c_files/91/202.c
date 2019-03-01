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
	char *s,*p;
	s=(int*)malloc(100*sizeof(int));
	gets(s);
	for(p=s;*(p+1)!='\0';p++)
	   printf("%c",*p+*(p+1));
    printf("%c\n",*p+*s);
}