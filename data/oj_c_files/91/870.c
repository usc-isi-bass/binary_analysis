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
	char str[101];
	char fstr[101];
	char c=str[0];
	char*p=str,*q=fstr;
	cin.get(str,101);
	for(p,q;*(p+1)!='\0';p++,q++)
		*q=*p+*(p+1);
	*q=*p+*str;
	*(q+1)='\0';
	printf("%s\n",fstr);
	return 0;
}