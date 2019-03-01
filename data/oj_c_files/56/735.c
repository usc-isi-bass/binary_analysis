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
	char a[6];
	int b,c,i;
	scanf("%s",a);
	b=strlen(a);
	for(i=0;i<(b-1)/2;i++)
	{
			a[i]=a[b-i-1]+a[i];
			a[b-i-1]=a[i]-a[b-i-1];
			a[i]=a[i]-a[b-i-1];
	}
	printf("%s\n",a);
}