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
	char*p;
	p=(char*)malloc(1000*sizeof(char));
	int i,k=0;
	gets(p);
	for(i=0;*(p+i)!='\0';i++)
	{
		if(*(p+i)!=' ')
		{
			printf("%c",*(p+i));
			k=1;
		}
		if((k==1)&&(*(p+i)==' '))
		{
			printf(" ");
			k=0;
		}
	}
}