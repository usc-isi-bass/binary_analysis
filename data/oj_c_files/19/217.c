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
	char str[255],from[255],to[255];
	char*s=str,*p;
	gets(s);
	scanf("%s%s",from,to);
	strcat(s," ");
	while(*s){
		p=strchr(s,' ');
		*p='\0';
		printf((strcmp(s,from)==0)?to:s);
		s=p+1;
		if(*s)
			printf(" ");
	}
	return 0;
}
