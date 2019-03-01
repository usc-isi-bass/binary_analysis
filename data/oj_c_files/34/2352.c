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
	int n,a[100];
	scanf("%d",&n);
	int i=0;
	a[0]=n;
	if(a[0]==1)
		printf("End");
	else
	{
	
	while(a[i]!=1)
	{
	if(a[i]%2==0)
	{
		a[i+1]=a[i]/2;
		printf("%d/2=%d\n",a[i],a[i+1]);
		if(a[i+1]==1)
			break;
	}
	else
	{
		a[i+1]=a[i]*3+1;
		printf("%d*3+1=%d\n",a[i],a[i+1]);
		if(a[i+1]==1)
			break;
	}
	i++;
	}
	printf("End");
	}
	return 0;

}


