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
	char s1[101],s2[101]={'\0'},*p1=s1,*p2=s2;
	int n;
	gets(s1);
	n=strlen(s1);
	for(;p1<s1+n-1;p1++,p2++)
		*p2=*p1+*(p1+1);
	*p2=*p1+s1[0];
	puts(s2);
	return 0;
}