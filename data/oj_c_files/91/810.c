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
	int i;
	char*p,c;
	p=(char*)malloc(100*sizeof(char));
	gets(p);
	c=*p;
	for(i=0;*(p+i+1)!='\0';i++)
	{
		*(p+i)=*(p+i)+*(p+i+1);
	}
	*(p+i)=c+*(p+i);
	*(p+i+1)='\0';
	puts(p);
}

