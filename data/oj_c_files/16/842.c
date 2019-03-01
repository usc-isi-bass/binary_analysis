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
	char a[10]={0};
	int b,i,n;
	scanf("%d",&b);
	i=0;
	do
	{
		a[i]=b%10;
		b=b/10;
		i++;
	}while(b>0);
	n=i;
	for(i=0;i<n;i++)
		printf("%d",a[i]);
	printf("\n");
	return 0;
}