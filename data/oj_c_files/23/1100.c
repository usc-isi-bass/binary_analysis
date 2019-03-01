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
	char str[200];
	gets(str);
	int n=strlen(str);
	int i,j,c[50],d=0;
	c[0]=n;
	for(i=n-1;i>=0;i--)
		if(str[i]==' ')
		{
			d++;
			c[d]=i;
			for(j=i+1;j<c[d-1];j++)
				putchar(str[j]);
            printf(" ");
		}
	for(i=0;i<c[d];i++)
		putchar(str[i]);
}