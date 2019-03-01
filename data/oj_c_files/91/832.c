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
	char *s = (char*)malloc(101*sizeof(char));
	gets(s);
	int i=0;
	for(i=0;i<strlen(s);i++){
		if(i<strlen(s)-1)
			printf("%c",(char)(*(s+i)+*(s+i+1)));
		else
			printf("%c\n",(char)(*(s+i)+*s));
	}

	return 0;
}