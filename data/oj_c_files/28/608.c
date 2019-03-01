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
	char a[10000],*p=a,n;
	int i;
	gets(a);
	n=strlen(a);
	for(p=a;;)
	{
		for(i=0;*p!=' '&&*p!='\0';p++)
			i++;
		if(i!=0&&*p==' ')
		{
			printf("%d,",i);
			p++;
		}
		else if(i==0&&*p==' ')
			p++;
		else if(i!=0&&*p=='\0')
		{
			printf("%d",i);
			break;
		}
	}
}
		