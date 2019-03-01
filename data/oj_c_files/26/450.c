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
	char a[100];
	gets(a);
	int n;
	n=strlen(a);
	int i,j,k;
	char b[100];
	for(i=0,k=0;i<n;i++)
	{
		if(a[i]!=' ')
		{
			b[k]=a[i];
			k++;
		}
		if(a[i]==' ' && a[i+1]!=' ')
		{
			b[k]=a[i];
			k++;
		}
		if(a[i]==' ' && a[i+1]==' ')
			continue;
	}
	for(i=0;i<k;i++)
		printf("%c",b[i]);
	return 0;
}
