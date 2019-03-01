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
	char sz[101],*p,first;
	p=sz;
	gets(p);
	first=*p;
	for(;*(p+1)!='\0';p++){
		*p=*p+*(p+1);
	}
	*p+=first;
	*(p+1)='\0';
	printf("%s",sz);
	return 0;
}
