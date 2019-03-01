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
	char s[1000];
	int i;
	gets(s);
	char *a,*b;
	a=b=&s[0];
	int n;
	n=strlen(s);
	s[n]='\0';
	for(i=0;i<n;i++)
	{
		a=a+1;
		if(*a==' '&&*(a-1)!=' ')
			printf("%d,",a-b);
		if(*(a-1)==' '&&*a!=' ')
			b=a;
		if(*a=='\0')
			printf("%d",a-b);
	}
}