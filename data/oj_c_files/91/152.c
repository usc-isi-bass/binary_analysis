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
    char s[102]={' '},*p;
    gets(s);
	s[strlen(s)]=s[0];
	for(p=s;p<s+strlen(s);p++)
		*p+=*(p+1);
	s[strlen(s)-1]='\0';
	printf("%s",s);
}
