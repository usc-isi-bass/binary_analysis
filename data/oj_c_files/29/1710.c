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

float f(int n)
{
	if (n==1||n==2)
	return 1;
	else
	return f(n-1)+f(n-2); 
}
main()
{
	int n,m;
	scanf("%d",&m);
	for (int k=1;k<=m;k++)
		{scanf("%d",&n);
		float sum=0;
		for (int i=1;i<=n;i++)
			sum=sum+(f(i+2)/f(i+1));
		printf("%.3f\n",sum);
	}	
} 