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

void P(char a,char b)
{
	int m,n;
	m=a;
	n=b;
	printf("%c",m+n);
}
int main()
{
	int i,n,a,b;
	char str[100];
	gets(str);
	n=strlen(str);
	for(i=0;i<n-1;i++)
	{
		P(str[i],str[i+1]);
	}
	a=str[0];
	b=str[n-1];
	printf("%c",a+b);
	return 0;
}