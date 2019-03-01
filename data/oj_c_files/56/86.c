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
	int a[5]={11,11,11,11,11};
	int i=0,b,j;
	scanf("%d",&b);
	while(b>0)
	{
		a[i]=b%10;
		i++;
		b=b/10;
	}
	for (j=0;j<5;j++)
	{
		if (a[j]<10)
			printf("%d",a[j]);
	}
	printf("\n");
	return 0;
}
