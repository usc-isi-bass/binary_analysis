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
	char a[100],*p;
	int n,m=0,i,j;
	gets(a);
	p=a;
	n=strlen(a);
	for(i=n-1;i>=0;i--)
	{
		if(*(p+i)!=' ') m=m+1;
		if(*(p+i)==' ')
		{
			for(j=i+1;j<i+m+1;j++)
				printf("%c",*(p+j));
			printf(" ");
			m=0;
		}
	}
	for(i=0;*(p+i)!=' '&& *(p+i)!='\0';i++)
		printf("%c",*(p+i));
}
