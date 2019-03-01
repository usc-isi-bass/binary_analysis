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
	int n,i,l,a,t,k;
	char s[101],b[101],*p,*q;
	gets(s);
	l=strlen(s);
	for(p=s,q=b;p<s+l-1;p++,q++){
		*q=*p+*(p+1);
	}
	*q=*p+s[0];
	for(q=b;q<b+l;q++){
		printf("%c",*q);
	}
	return 0;
}