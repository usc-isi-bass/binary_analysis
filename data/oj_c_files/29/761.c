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
	int m,n[100],i,str;
	scanf("%d",&m);
	for(i=0;i<m;i++)
	{
		scanf("%d",&n[i]);
	}
	for(i=0;i<m;i++)
	{
		double sum=0;
		int p=1,q=2,t=0;
		while(t<n[i])
		{
			sum+=(double)q/p;
			str=q;
			q=p+q;
			p=str;
			t++;
		}
		printf("%.3lf\n",sum);
	}
	return 0;
}
