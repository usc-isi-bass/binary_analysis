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
	char c[101],*p=c;
	int n,i,j,l;
	gets(c);
	l=strlen(c)-1;
	j=*p;
	for(i=0;i<l;i++)
		*(p+i)=*(p+i)+*(p+i+1);
	*(p+l)=*(p+l)+j;
	printf("%s\n",p);
	return 0;
}