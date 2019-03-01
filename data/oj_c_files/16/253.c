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
	int m,n;
	int i=0;
	char c[100];
	
	char d[100];
	char e[100];
	gets(c);
	n=m=strlen(c);
	do
	{
		d[i]=c[m-1];
		m=m-1;
		i++;
	}while(m>=1);
	d[n]=32;
	sscanf(d,"%[^ ]",e);
	puts(e);
	scanf("%d",&m);
	return 0;
}
	