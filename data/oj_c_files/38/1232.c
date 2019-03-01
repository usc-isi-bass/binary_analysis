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
	int i,n,m,j;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&m);
		double a[100]={0},s=0,ave,s1=0,s2=0,*p=a;
		for(j=0;j<m;j++)
		{
			scanf("%lf",p+j);
			s=s+a[j];
		}
		ave=s/m;
		for(j=0;j<m;j++)
		{
			s2=s2+(*(p+j)-ave)*(*(p+j)-ave);
		}
		s1=sqrt(s2/m);
		printf("%.5lf\n",s1);
	}
	return 0;
}