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
	char a[80],b[80];
	int i;
	gets(a);
	gets(b);
	for(i=0;a[i]!=0;i++)
		if(a[i]>=65&&a[i]<=90)a[i]+=32;
	for(i=0;b[i]!=0;i++)
		if(b[i]>=65&&b[i]<=90)b[i]+=32;
	i=strcmp(a,b);
	if(i>0)printf(">");
	else if(i==0)printf("=");
	else printf("<");
	return 0;
}