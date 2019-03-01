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

void main()
{
	int m,k,n,t,i;
	scanf("%d%d",&n,&k);
	for(m=2;;m++)
	{
		t=m;
		for(i=1;i<=n;i++)
		{
			if((t-k)%n!=0||(t-k)<=0)break;
			t=t-(t-k)/n-k;
		}
		if(i>=n+1)
		{
			printf("%d\n",m);
			break;
		}
	}
}
