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
	char c[100];
	int n,i,j,t;
	gets(c);
	n=strlen(c);
	t=n;
	for(i=n-1;i>=0;i--)
		if(c[i]==' ')
		{
			for(j=i+1;j<t;j++)
				printf("%c",c[j]);
            t=i;
            printf(" ");
		}
	for(j=0;j<t;j++)
		printf("%c",c[j]);
	printf("\n");
}