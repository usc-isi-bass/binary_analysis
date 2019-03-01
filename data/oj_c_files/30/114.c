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

main()
{
	int n,i,a,b,sum=0;
	scanf("%d",&n);
	for (i=1;i<=n;i++)
	{
		a=i%10;
		b=(i-a)/10;
		if(a==7||b==7);
		else if (i%7==0);
		else
			sum=sum+i*i;
	}
	printf("%d",sum);
	return 0;
}

