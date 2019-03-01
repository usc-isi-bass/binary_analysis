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
	int i,n=0;
	char d[5],c[5];
	for(i=0;i<5;i++)
	{
		scanf("%c",&d[i]);
		if(d[i]>=48&&d[i]<=57) {c[i]=d[i];n++;}
		else break;
	}
	for(i=n-1;i>=0;i--)
		printf("%c",c[i]);
	return 0;
}