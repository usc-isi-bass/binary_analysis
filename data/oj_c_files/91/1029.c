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
	char a[102],b[102];
	int i,j;
	for(i=0;i<=101;i++)
		b[i]='\0';
	for(i=1;;i++)
	{
		a[i]=getchar();
		if(a[i]=='\n')
		{
			j=i-1;
			break;
		}
	}
	for(i=1;i<j;i++)
		b[i]=a[i]+a[i+1];
	b[j]=a[j]+a[1];
	for(i=1;i<=j;i++)
		printf("%c",b[i]);
	return 0;
}