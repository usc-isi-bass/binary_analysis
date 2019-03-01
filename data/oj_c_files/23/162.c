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

main()
{
	char a[101],b[101];
	int i,n,j=0;
	gets(a);
	n=strlen(a);
	for(i=n-1;i>=0;i--)
	{
		if(a[i]!=' ')
		{
			b[j]=a[i];
			j++;
		}
		else
		{
			for(j-=1;j>=0;j--)
			printf("%c",b[j]);
			j=0;
			putchar(' ');
		}
	}
	for(i=0;;i++)
	{
		if(a[i]==' '||i==n)break;
		else putchar(a[i]);
	}
	putchar('\n');


	
}


