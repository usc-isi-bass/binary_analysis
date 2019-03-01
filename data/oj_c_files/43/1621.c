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
	int n,i,j,w;
	scanf("%d\n",&n);
	w=0;
	int a[32767]={0};
	for(i=3;i<=n-1;i=i+2)
	{
		for(j=2;j<i;j++)
		{
			if(i%j==0)
				w++;
		}
		if(w==0)
		{
			a[i]=i;
		}
		w=0;
	}
	for(i=3;i<=n-1;i=i+2)
	{
		for(j=i;j<=n-1;j=j+2)
		{
			if(a[i]+a[j]==n)
				printf("%d %d\n",a[i],a[j]);
	}
	}
	return 0;
}