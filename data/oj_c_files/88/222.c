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
	
	char *str;
	str=(char*)malloc(30*sizeof(char));
	char *p;
	p=str;
	gets(str);
	//puts(str);
	for(p=str;p<str+strlen(str);p++)
	{
		if(48<=*p&&*p<=57)
		{
		
		printf("%c",*p);
		}
			if(  (48<=*(p-1)&&*(p-1)<=57)&&(!(48<=*p&&*p<=57)) )printf("\n");

	}
}