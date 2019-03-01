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
	int i;
	char s[100],w[100],*p,*q;
	scanf("%s %s",s,w);
	p=s;q=w;
	while(*p!=*q)
	q++;
	for(i=0;i<strlen(s);i++,p++,q++)
		if(*p!=*q)break;
		if(i==strlen(s))
			printf("%d",q-w-strlen(s));
}