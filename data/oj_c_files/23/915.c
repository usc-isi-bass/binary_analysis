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
	int m,n,i,j;
	gets(a);
	m=strlen(a);
	p=a;
	j=m;
	for(i=m-1;i>-1;i--)
		if(*(p+i)==' ')
		{
			printf("%s",p+i+1);
			printf(" ");
			*(p+i)='\0';
			j=i;
		}
		for(i=0;i<j;i++)
			printf("%c",*(p+i));
}