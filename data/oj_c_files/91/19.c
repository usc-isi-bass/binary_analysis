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
	char a[102],*p1=a,b[102]={'\0'},*p2=b;
	int i,j,k,l;
	gets(a);
	l=strlen(a);
	for(i=0;i<l-1;i++)
	{
		*(p2+i)=*(p1+i)+*(p1+i+1);
	}
	*(p2+l-1)=*(p1+l-1)+*p1;
	printf("%s",b);
}