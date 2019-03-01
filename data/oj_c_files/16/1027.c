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
	int n=0;
	int n_1=0,i=0;
	int len=0;
	int a[6]={0};
	scanf("%d",&n);
	n_1=n;
	for(;n/10>0;)
	{
		n=n/10;
		len++;
	}
	len++;
	for(i=0;i<len;i++)
	{
		a[i]=n_1%10;
		n_1=n_1/10;
	}
	for(i=0;i<len;i++)
	{
		printf("%d",a[i]);
	}
}



