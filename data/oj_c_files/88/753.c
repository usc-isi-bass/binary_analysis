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
	int i;
	char *a;
    a=(char *)malloc(30);
	gets(a);
	if(*a>='0'&&*a<='9')
		printf("%c",*a);
	for(i=1;*(a+i)!='\0';i++)
	{
		if(*(a+i)>='0'&&*(a+i)<='9')
			printf("%c",*(a+i));
		else if((*(a+i)<'0'||*(a+i)>'9')&&*(a+i-1)>='0'&&*(a+i-1)<='9')
			printf("\n");
	}
}