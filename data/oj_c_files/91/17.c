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


int main(){
	char s[101];
	char s1[101];

	char *p=s,*q=s1;
	char *t=s;

	gets(s);
	for(p=s+1,q=s1;p<s+strlen(s),q<s1+strlen(s)-1;p++,q++){
		*q=*(p-1)+*p;
	}
	*q=*(p-1)+*t;

	for(p=s1;p<s1+strlen(s);p++){
		printf("%c",*p);
	}

	return 0;
}
