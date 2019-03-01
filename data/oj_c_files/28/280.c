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
	char str[3000];
	int i,j=0,k;
	char *p;
	gets(str);
	p=str;
	for(i=0;*(p+i)!='\0';i++)
	{
		if(*(p+i)!=' ')
		{
			j++;k=0;
		}
		else if(k==0)
		{
			printf("%d,",j);
			k=1;j=0;
		}
	}
	printf("%d\n",j);
}