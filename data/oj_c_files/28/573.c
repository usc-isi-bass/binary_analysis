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
	char str[5000],*p=str;
	int k,i;
    gets(str);
	for(k=0,i=0;*(p+i);i++)
		if(*(p+i)==' ')continue;
		else
		{
			k++;
		if(*(p+i+1)==' '||*(p+i+1)=='\0')
		{
         printf("%d%s",k,*(p+i+1)=='\0'?"\n":",");
		 k=0;
		}
		}
}
	