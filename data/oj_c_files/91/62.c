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
	char s[101],s1[101];
	gets(s);
	char *p=s,*p1=s1;
	for(;*p!='\0';p++,p1++){
		if(*(p+1)!='\0'){
			*p1=*p+*(p+1);
		}else{
			char *p0=s;
			*p1=*p+*p0;
		}
	}
	*p1='\0';
	p1=s1;
	printf("%s",p1);
	return 0;
}