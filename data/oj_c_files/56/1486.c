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
    char s[5],t[5];
    int l=0,i,j;
    gets(s);
	l=strlen(s);
	for(i=0,j=l-1;i<l,j>=0;i++,j--)
		t[j]=s[i];
	t[l]='\0';

	printf("%s",t);
		return 0;
}