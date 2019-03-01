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
	int n,i,j;
	char *p,*q;
	p=(char *)malloc(100*sizeof(char));
	q=(char *)malloc(100*sizeof(char));
	gets(p);
	n=strlen(p);
	for(i=0;i<=n-2;i++)
		*(q+i)=*(p+i)+*(p+i+1);
	*(q+n-1)=*(p+n-1)+*(p+0);
	*(q+n)='\0';
    puts(q);
}