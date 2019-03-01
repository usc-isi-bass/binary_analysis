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
	char x[80],y[80];
	int i;
	for (i=0;i<=79;i++)
	{
		x[i]=0;
		y[i]=0;
	}
	gets(x);
	gets(y);
	for (i=0;i<=79;i++)
	{
		if(x[i]>64&&x[i]<91) x[i]+=32;
	}
	for (i=0;i<=79;i++)
	{
		if(y[i]>64&&y[i]<91) y[i]+=32;
	}
	if(strcmp(x,y)>0) printf(">\n");
	else
	{
		if(strcmp(x,y)<0) printf("<\n");
		else printf("=\n");
	}
}