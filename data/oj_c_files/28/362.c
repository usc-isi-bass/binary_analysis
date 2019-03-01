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
	char str[10000];
	char *p;
	gets(str);
	p=str;
	int k;
	k=0;
	while(*p!='\0')
	{
		if(*p!=' ') 
		{k++;p++;}
		else if(*(p-1)!=' ')
		{
			printf("%d,",k);
			p++;
			k=0;
			continue;
		}
		else {p++;continue;}
	}
	printf("%d",k);
}
	
