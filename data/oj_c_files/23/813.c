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
	char s[101],*string[50],*p=s;
	int c=0,i;
	gets(s);
	string[c++]=&s[0];
	for(i=0;*p!='\0';i++,p++)
		if(*p==' ')
		{
			*p='\0';
			string[c++]=p+1;
		}
	c--;
	for(;c>=0;c--)
	{
		printf("%s",string[c]);
		if(c!=0) printf(" ");
	}
}