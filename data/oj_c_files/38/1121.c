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
	int k,i,n;
	double a[1000],ave,sum,c2[1000];
	scanf("%d",&n);
	while(n--)
	{
		
		ave=0;
		scanf("%d",&k);
		for(i=0;i<k;i++)
		{
			scanf("%lf",&a[i]);
			ave+=a[i]/k;
		}
		sum=0;
		for(i=0;i<k;i++)
		{
			c2[i]=(a[i]-ave)*(a[i]-ave);
			sum+=c2[i]/k;
		}
		printf("%.5lf\n",sqrt(sum));
		
	}
}

		