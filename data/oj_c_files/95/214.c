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
	char c[80],d[80];
	char f(char x[80]);
	int t;
	gets(c);
	gets(d);
	f(c);
	f(d);
	t=strcmp(c,d);
	if(t<0)
		printf("<");
	if(t==0)
		printf("=");
	if(t>0)
		printf(">");
	 return 0;
}
char f(char x[80])
{
	int m,i;
    m=strlen(x);
    for(i=0;i<=m-1;i++)
	 if(x[i]>='A'&&x[i]<='Z')
			x[i]=x[i]+32;
	 return 0;
}