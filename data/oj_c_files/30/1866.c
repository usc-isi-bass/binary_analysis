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
	int a[100],sum=0,i,n;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		a[i]=i;
		if(i%7==0||i%10==7||i>=70&&i<=79)
		{
			a[i]=0;
		}
		if(a[i]!=0)
		{
			sum+=a[i]*a[i];
		}
	}
	printf("%d",sum);
	return 0;
}
