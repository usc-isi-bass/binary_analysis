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




int main() {
	char s[31];
	
	char *p;
	gets(s);
	p=s;
	while((*p)!='\0')
	{
	for(;(*p)>='0'&&(*p)<='9';p++)
	{
		printf("%c",*p);
		}

	if((*p)!='\0')
	p++;
	printf("\n");
	}
	return 0;
}