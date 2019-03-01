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
	int n;
    char s[200],*p,*k;
	gets(s);
	n=strlen(s);
	for(p=s+n-1;p>s;p--){
		if(*p==' '){
			for(k=p+1;(*k!=' ')&&(*k!='\0');k++)
			{printf("%c",*k);}
			printf(" ");
		}
	}
	for(;(*p!=' ')&&(*p!='\0');p++)
		printf("%c",*p);
}
	