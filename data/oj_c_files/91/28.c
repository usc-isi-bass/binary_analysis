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
	int len,i;
	char a[100],b[100],*p,*q;
	p=a;
	q=b;
	gets(a);
	len=strlen(a);
	for(i=0;i<len;i++)
	{
		if(i!=len-1)
		{
			*(q+i)=*(p+i)+*(p+i+1);
		}
		else
		{
			*(q+i)=*(p+i)+*p;
		}
	}
	for(i=0;i<len;i++)
	{
		printf("%c",*(q+i));
	}
	return 0;
}
