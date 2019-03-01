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
	
	char str[102],str1[102],*p,*q;
	gets(str);
	p=str;
	q=str1;
	for(p=str;*(p+1)!='\0';)
	{
		*q++=*p+(*++p);
	}
	if(*(p+1)=='\0'){*q++=(*p)+*str;}
	*q='\0';
	for(q=str1;*q!='\0';q++)
	printf("%c",*q);
}
