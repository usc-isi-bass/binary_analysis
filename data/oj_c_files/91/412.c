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
	char str[1000],str1[1000];
	int a[122],i,l;
	gets(str);
	l=strlen(str);
	for (i=0;i<l-1;i++)
		str1[i]=str[i]+str[i+1];
	str1[l-1]=str[l-1]+str[0];
	for (i=0;i<l;i++)
		printf("%c",str1[i]);
	return 0;
}

