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
	int a[100],n,k=0;
	int *p=a;
	scanf("%d",&n);
	for(;;p++)
	{
		if(k==n)
			break;
		scanf("%d",p);
		k++;
	}
	p--;
	printf("%d",*p);
	p--;
	do
	{
		printf(" %d",*p);
		p--;
	}while(p>=a);
	return 0;
}