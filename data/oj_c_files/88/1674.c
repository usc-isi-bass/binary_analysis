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
	char s[30];
	char *p;
	gets(s);
	p=&s[0];
	for( ;p<p+30;p++){
		if(*p>='0'&&*p<='9')
			printf("%c",*p);
		else if(p>s){
			if(*(p-1)>='0'&&*(p-1)<='9')
				printf("\n");
		}
		if(*p=='\0') break;
	}
	return 0;
}