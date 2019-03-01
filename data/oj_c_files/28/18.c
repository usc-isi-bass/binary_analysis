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
	int i,n,l[400];
	char a[400][40];
	for(i=0;(scanf("%s",a[i]))!=EOF;i++)
		;
	n=i;
	for(i=0;i<n;i++)
		l[i]=strlen(a[i]);
	for(i=0;i<n;i++)
		if(i==0)
			printf("%d",l[i]);
		else
			printf(",%d",l[i]);


}