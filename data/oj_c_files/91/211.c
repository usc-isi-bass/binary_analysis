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
	int len;
	char *str,*p,*q;
	str=(char *)calloc(150,sizeof(int));
	gets(str);
	len=strlen(str);
	for(p=str;p-str<len-1;p++)
		printf("%c",*p+*(p+1));
	printf("%c\n",*p+*str);
}


	