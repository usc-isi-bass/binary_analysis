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

int main ()
{
	int i,n;
	char s1[101],s2[101];
	char * p,* q;
    gets(s1);
	p=s1;
	q=s2;
	n=strlen(s1);
	for (i=0;*(p+i+1)!='\0';i++){
       *q=(*(p+i))+(*(p+i+1));
	   q++;   
	}
	*(q++)=*(p+n-1)+*p;
	*(q++)='\0';
	puts(s2);
	return 0;
}