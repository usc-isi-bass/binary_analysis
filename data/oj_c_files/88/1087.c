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
	char a[100],*p,*q;
	int i;
	p=a;
	q=a;
	for(i=1;i<=30;i++,p++)
	{
		scanf("%c",p);
	if(*p=='\0')
		break;
	}
	for(i=1;i<=30;i++,q++)
	{
		if(*q>=48&&*q<=57)
			printf("%c",*q);
		else if(*(q-1)>=48&&*(q-1)<=57)
			printf("\n");
	}
	return 0;
}