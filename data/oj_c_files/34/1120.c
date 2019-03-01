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

int main ()
{
	int n,i,j,a[100000];
	scanf("%d",&n);
	a[0]=n;
	if(n==1)
	{
		printf("End");
	}
	else 
	{
	for(i=1;i<=100000;i++)
	{
	if(a[i-1]%2!=0)
	{
		a[i]=a[i-1]*3+1;
		printf("%d*3+1=%d\n",a[i-1],a[i]);
	}
	if(a[i-1]%2==0)
	{
		a[i]=a[i-1]/2;
	printf("%d/2=%d\n",a[i-1],a[i]);
	}
	if(a[i]==1)
		break;
	}
	printf("End");
	}
	return 0;
}