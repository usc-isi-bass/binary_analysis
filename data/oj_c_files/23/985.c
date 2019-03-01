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
	char a[101];
	int n=0;
	int i=0,j;
	gets(a);
	while(a[i]!='\0')
	{
		n++;
		i++;
	}
	i=n-1;
	a[n]=' ';
	while(i>=0)
	{
		if(a[i]==' ')
		{
			for(j=i+1;a[j]!=' ';j++)
				printf("%c",a[j]);
			printf(" ");
		}
		if(i==0)
			for(j=0;a[j]!=' ';j++)
				printf("%c",a[j]);
		i--;
	}
	return 0;
}