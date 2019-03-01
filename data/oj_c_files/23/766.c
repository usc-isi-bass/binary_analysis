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
	char a[100][100];
	int i,j,k;
	for(i=0;;i++)
	{
		scanf("%s",&a[i]);
		if(getchar()=='\n') break;
	}
	printf("%s",a[i]);
	for(j=i-1;j>=0;j--)
	{
		printf(" %s",a[j]);
	}
	printf("\n");
}