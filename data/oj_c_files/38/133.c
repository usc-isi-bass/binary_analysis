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
	int k,n,i,j;
	double s=0,a[100]={0},aver=0;
	scanf("%d",&k);
	for(i=0;i<k;i++)
	{
		scanf("%d",&n);
		{
			aver=0;
			s=0;
			for(j=0;j<n;j++)
			{
				scanf("%lf",&a[j]);
				aver+=a[j];
			}
			aver/=n;
			for(j=0;j<n;j++)
			{
				s+=((a[j]-aver)*(a[j]-aver));
			}
			s/=n;
			s=sqrt(s);
			printf("%.5lf\n",s);
		}
	}
	return 0;
}