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
	char a[102],b[102]={'0'};
	gets(a);
	int i,n=strlen(a);
	for(i=0;i<n;i++)
	{
		if(i!=n-1)
		{
			b[i]=a[i]+a[i+1];
		}
		else b[i]=a[i]+a[0];
	}
	puts(b);
}