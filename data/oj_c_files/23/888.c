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
	char a[100];
	int i,n=0,t=0,j=0;
	gets(a);
	for (i=0;a[i]!='\0';i++) n=n+1;
	for (i=n-1;i>=0;i--)
	{
		if (a[i]==' ')
		{	
			for(j=i+1;a[j]!=' '&&a[j]!='\0';j++) printf("%c",a[j]); printf(" ");
		}
	}
	for (i=0;a[i]!=' '&&a[i]!='\0';i++) printf("%c",a[i]);
}