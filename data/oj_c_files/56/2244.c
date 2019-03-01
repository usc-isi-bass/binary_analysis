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
	char a[10];

	int i,j,k,n;
	gets(a);
	n=strlen(a);
	for(i=0;i<=(n-1)/2;i++)
	{
	k=a[i];
	a[i]=a[n-1-i];
	a[n-1-i]=k;
	}
	for(i=0;i<n;i++)
	printf("%d",a[i]-'0');
}