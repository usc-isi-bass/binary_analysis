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
	char a[10000];
	int b[300],i,j=0;
	for(i=0;i<300;i++)
		b[i]=0;
	gets(a);
	for(i=0;i<strlen(a);i++)
	{
		if(a[i]!=' '&&a[i-1]==' ')
			j++;
		if(a[i]!=' ')
			b[j]++;
	}
	for(i=0;i<=j;i++)
	{
		if(i>0) printf(",");
		printf("%d",b[i]);
	}


}