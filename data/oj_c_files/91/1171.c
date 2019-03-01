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
	int b[1000];
	char a[1000];
	int n,i;
	gets(a);
	n=strlen(a);
	for(i=0;i<n;i++)
		b[i]=a[i];
	for(i=0;i<n-1;i++)
		printf("%c",b[i]+b[i+1]);
	printf("%c",b[n-1]+b[0]);
	

	return 0;
}