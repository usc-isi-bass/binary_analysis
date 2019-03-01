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
	int panduan(char *s,int len);
	char shuru[30],*s;
	int i,n,len;
	gets(shuru);
	n=atoi(shuru);
	for(i=0;i<n;i++){
		gets(shuru);
		len=strlen(shuru);
		s=shuru;
		if(panduan(s,len))
			printf("yes\n");
		else
			printf("no\n");
	}
	return 0;
}
int panduan(char *s,int len)
{
	int i;
	for(i=0;i<len;i++){
		if(*s!='_'&&(*s<'a'||*s>'z')&&(*s<'A'||*s>'Z'))
			return 0;
		if(*(s+i)!='_'&&(*(s+i)<'a'||*(s+i)>'z')&&(*(s+i)<'A'||*(s+i)>'Z')&&(*(s+i)>'9'||*(s+i)<'0'))
			return 0;
	}
	return 1;
}