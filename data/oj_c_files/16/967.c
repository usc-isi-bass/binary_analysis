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
	int i,j,n,a[10];
	scanf("%d",&n);
	if(n==0)printf("0");
	for(i=0;n!=0;i++)
	{
		a[i]=n%10;
		n=n/10;
	}
	for(j=0;j<i;j++)
		printf("%d",a[j]);
}



