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
	char s[101];
	char *p1,*p2;

	gets(s);
	p1=s+strlen(s);
	while(p1+1>s){
		for(p2=p1,*p2=0;*p1!=' '&&p1>=s;p1--){
			;
		}
		if(p1+1>s){
			printf("%s",p1+1);
			putchar(' ');
		}
		else puts(s);
	}
}
