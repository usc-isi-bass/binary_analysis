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
	char str[1000],*p;
	p=str;
	int n,i,k=0;
	gets(str);
	n=strlen(str);
	str[n]=' ';
	for(i=0;i<=n;i++)
	{if(*(p+i)!=' ') k+=1;
	else {if(i<n&&k!=0) printf("%d,",k);if(i==n&&k!=0) printf("%d",k);k=0;}}
	return 0;
}