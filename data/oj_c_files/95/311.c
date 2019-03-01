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
	char s[81],m[81];
	gets(s);
	gets(m);
	int a, b, i;
	a=strlen(s);
	b=strlen(m);
	for(i=0;i<a;i++){
		if(s[i]>='a'&&s[i]<='z')
			s[i]=s[i]-32;
	}
	for(i=0;i<b;i++){
		if(m[i]>='a'&&m[i]<='z')
			m[i]=m[i]-32;
	}
	int c,k=0;
	if(a>=b)
		c=a;
	else
		c=b;
	for(i=0;i<c;i++){
		if(s[i]>m[i]){
			printf(">");
			break;
		}
		else if(s[i]<m[i]){
			printf("<");
			break;
		}
		k++;
	}
	if(k==c)
		printf("=");
	return 0;
}