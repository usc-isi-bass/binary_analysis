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
{int i,a[20],m,n;
	scanf("%d",&n);
	a[0]=1;
	a[1]=1;
	for(i=2;i<20;i++)
		a[i]=a[i-1]+a[i-2];
	i=0;
	while(i<n)
	{	scanf("%d",&m);
		if(i==n-1)
			{printf("%d",a[m-1]);return 0;}
		else		
			printf("%d\n",a[m-1]);
i++;
	}
	return 0;
}