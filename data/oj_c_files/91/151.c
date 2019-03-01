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

	char s[105],a[105];
	int i,j,k,l,m,n;
	gets(s);

	for(i=0;*(s+i)!='\0';i++)
	{if(*(s+i+1)=='\0')
	*(a+i)=*(s+i)+*(s+0);
	else *(a+i)=*(s+i)+*(s+i+1);
	}

	*(a+i)='\0';
	for(i=0;*(a+i)!='\0';i++)
		printf("%c",*(a+i));
}