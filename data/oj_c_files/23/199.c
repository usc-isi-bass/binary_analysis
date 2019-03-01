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
	int i,n,m;
	
	char a[101];
	char b[10][100];
	gets(a);
	

	n=m=0;i=0;
    while(a[i]!='\0')
	{
		while((a[i]!=' ')&&(a[i]!='\0'))
		{
			b[n][m]=a[i];
			i++;
			m++;
		}
		b[n][m]='\0';
		n++;m=0;
		while(a[i]==' ')
		{
			
			b[n][m]=a[i];
			m++;
			i++;
		}
		b[n][m]='\0';
		n++;m=0;
	}
	for(i=n-1;i>=0;i--)
	{
		printf("%s",b[i]);
	}
	
	return 0;
}

