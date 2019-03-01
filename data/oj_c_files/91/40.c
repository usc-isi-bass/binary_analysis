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
	char s[101];
	char *p;
	char s1[101];
	char *t;
	int n;

	gets(s);
	n=strlen(s);
	
	t=s1;
	for(p=s;p<s+n-1;){                
		*t=*p+*(++p);
		t++;
	} 
	*t=*p+*s;

	for(t=s1;t<s1+n;t++){
		printf("%c",*t);
	}
	return 0;
}