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

int main(int argc, char* argv[])
{
	char s[30];
	char c[30];
	int n;
	gets(s);
	gets(c);
	for(int i=0;s[i]!='\0';i++){
		if(s[i]>='A'&&s[i]<='Z') s[i]=s[i]+32;
        if(c[i]>='A'&&c[i]<='Z') c[i]=c[i]+32;}
	n=strcmp(s,c);
	if(n<0) printf("<");
	if(n==0) printf("=");
	if(n>0) printf(">");
	return 0;
}
