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
	char s[50],w[50],t[50];
	int i,j,l;
	scanf("%s%s",s,w);
	l=strlen(s);
	for(i=0;;i++)
	{
		for(j=0;j<l;j++)
			t[j]=w[i+j];
		t[l]=0;
		if(!strcmp(s,t))
			break;
	}
	printf("%d\n",i);
}