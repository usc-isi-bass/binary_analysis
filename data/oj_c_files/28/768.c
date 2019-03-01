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
	char str[300][50];
	int i=0,n,m;
	while(scanf("%s",str[i])!=EOF)
	{i++;}
	n=i;
	for(i=0;i<n;i++)
	{
		m=strlen(str[i]);
		if(i<n-1)
			printf("%d,",m);
		if(i==n-1)
			printf("%d",m);
	}
}