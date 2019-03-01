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
	int i=0,j=0,k;
	char a[100][100],b[101];
	gets(b);
	for(;b[j]!=0;)
		if(b[j]!=' ')
		{
			for(k=0;b[j]!=' '&&b[j]!=0;j++,k++)
				a[i][k]=b[j];
			a[i][k]=0;
			i++;
		}
		else
			j++;
	printf("%s",a[i-1]);
	for(j=i-2;j>=0;j--)
		printf(" %s",a[j]);
}