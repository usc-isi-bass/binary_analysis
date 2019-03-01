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
	char a[300],*p;
	int i,j,m=0;
	gets(a);
	for (i=97;i<123;i++)
	{for(j=0,p=a;(*p)!='\0';p++)
	{if ((*p)==i) j++;}
	if (j!=0) {printf("%c=%d\n",i,j);m++;}}
	if (m==0) printf("No\n");
}