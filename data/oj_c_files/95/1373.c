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
	char a[80],b[80];
	gets(a);
	gets(b);
	int i;
	int m,n;
	int e;
	e=1;
	m=strlen(a);
	n=strlen(b);
	if(m<n)
		m=n;
	for(i=0;i<m;i++)
	{
		if(a[i]<91)
			a[i]+=32;
		if(b[i]<91)
			b[i]+=32;
		if(a[i]>b[i])
		{
			printf(">");
			e--;
			break;
		}
		else if(a[i]<b[i])
		{
			printf("<");
			e--;
			break;
		}
	}
	if(e)
		printf("=");
	return 0;
}