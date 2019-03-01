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
	int a[13]={0,31,28,31,30,31,30,31,31,30,31,30,31},i,w,b[13]={13,0,0};
	scanf("%d",&w);
	for(i=1;i<=12;i++)
		b[i]=a[i-1]+b[i-1];
	for(i=1;i<=12;i++)
		if(((b[i]%7+w-1)==5)||((b[i]%7+w-1)==12))
			printf("%d\n",i);
	return 0;
}
