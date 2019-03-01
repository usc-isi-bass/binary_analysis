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
	char a[1000000];
	int i,j,n,b[300]={0};
	char c;
	gets(a);
	n=strlen(a);
	for(i=0,j=0;i<n;i++)
	{
		if(a[i]!=' ')
			b[j]++;
		if(a[i]==' '&&b[j]!=0)
			j++;
	}
	for(i=0;i<=j;i++)
	{
		printf("%d",b[i]);
		if(i!=j)
			printf(",");
	}
}