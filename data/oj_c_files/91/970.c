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
	char s1[101]={0},s2[101]={0};
	gets(s1);
	char *i=s1,*j=s2;
	int l=strlen(s1);
	for(;i<s1+l-1;i++,j++)
	{
		*j=*i+*(i+1);
	}
	*j=*i+s1[0];
	puts(s2);
	return 0;
}
