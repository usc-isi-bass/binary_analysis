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
	int i,n,a[100]={0},p;
	scanf("%d",&p);
	while (p>0)
	{
		for(i=0;i<100;i=i+1)
			a[i]=0;
		for(;p>0;)
		{ 
			a[p]=1;
			scanf("%d",&p);
		}
		n=0;
	for(i=1;i<50;i=i+1)
		if (a[i]&&a[2*i]) n=n+1;
		printf("%d\n",n);
		scanf("%d",&p);
	}
   
	return 0;
}