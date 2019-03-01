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
	char a[6],b[6];
	int d,i;
	scanf("%s",a);
	d=strlen(a);
	for(i=0;i<d;i++)
	{
		a[i];
		b[d-i-1]=a[i];
	}
	b[d]='\0';
		printf("%s",b);
	return 0;
}