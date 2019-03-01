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
	char *p;
	int i,j,k,l,n,m;
	p=(char*)malloc(101*sizeof(char));
	gets(p);
	l=strlen(p);
	*(p+l)=*(p);
	for(i=0;i<l;i++) *(p+i)+=*(p+i+1);
	*(p+l)='\0';
	puts(p);
}