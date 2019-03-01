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
	char *p=(char *)calloc(256,sizeof(char));
	char *q=(char *)calloc(256,sizeof(char));
	gets(p);
	int i,j;
	for(i=0,j=0;*(p+i)!='\0';i++)
	if(*(p+i)==' '&&*(p+i+1)==' ');
	else *(q+j)=*(p+i),j++;
	puts(q);
}