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
	char str[100];
	int n,i,j,k;
	gets(str);
	n=strlen(str);
	k=n;
	for (i=n-1;i>=0;i--)
	{
		if (str[i]==' ')
		{
			for (j=i+1;j<k;j++)
				printf("%c",str[j]);
			k=i;
			printf(" ");
		}
	}
	for (j=0;j<k;j++)
		printf("%c",str[j]);
}