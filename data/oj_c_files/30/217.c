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
	int n,a[100],i;
	long c=0;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		if((i%7==0) || (i%10==7) || (i/10==7))
			a[i]=0;
		else a[i]=i;
		c+=a[i]*a[i];
	}
	printf("%d",c);
	return 0;
}
