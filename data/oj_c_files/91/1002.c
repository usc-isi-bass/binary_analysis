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
	char a[101];
	int i,l;
	for(i=1;i<=100;i++)
	{
		scanf("%c",&a[i]);
		if(a[i]=='\n')
			break;
	}
	l=i-1;
	for(i=1;i<=l-1;i++)
		printf("%c",a[i]+a[i+1]);
	printf("%c",a[l]+a[1]);
	return 0;
}