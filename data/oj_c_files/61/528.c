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
	int n,i,a[100]={0};
	unsigned long f[25]={0};

	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}

	f[0]=1;
	f[1]=1;
	for(i=2;i<20;i++)
	{
		f[i]=f[i-1]+f[i-2];
	}
	
	
	for(i=0;i<n;i++)
	{
		printf("%d\n",f[a[i]-1]);
	}
	return 0;
}


