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


void main ()
{
	int n;
	int len;	

	scanf("%d",&n);
	getchar();

	for(;n>0;n--)
	{
		char str[100];

		gets(str);
		len=strlen(str);

		if(str[len-1]=='g') str[len-3]='\0';
		else str[len-2]='\0';

		puts(str);
	}
}