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
	char a[100];
	int b[100],n,i;
	gets(a);
	n=strlen(a);
	for(i=0;i<n-1;i++)
	{
		*(b+i)=*(a+i)+*(a+i+1);
	}
	*(b+n-1)=*(a+n-1)+*a;
	for(i=0;i<n;i++)
	{
		printf("%c",*(b+i));
	}
}