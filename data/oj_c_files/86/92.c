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
	int n,times,a[60],k,i;
	scanf("%d",&n);
	while(n>0)
	{
		n--;
		scanf("%d",&k);
		for(i=0;i<k;i++)
			scanf("%d",&a[i]);
		times=60;i=0;
		while(i<k&&a[i]<times)
		{
			if(times-3<a[i]) times=a[i];
			else times=times-3;
			i++;
		}
		printf("%d\n",times);
	}
}