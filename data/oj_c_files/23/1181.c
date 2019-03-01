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
	char *s,*p,*r;
	s=(char *)malloc(100*sizeof(char));
	gets(s);
	p=s+strlen(s)-1;
	for (;p>=s;p--)
	{
		if (*p==' ')
		{
			r=p+1;
			printf("%s ",r);
			*p='\0';
		}
		if (p==s) printf("%s",p);
	}
}