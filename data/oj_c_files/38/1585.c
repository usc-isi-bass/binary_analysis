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
	int k,n;
	double x[1000],a[1000]={0},c[1000]={0};
	scanf("%d",&k);
	for(int i=0;i<k;i++)
	{
		double s=0;
		scanf("%d",&n);
		for(int j=0;j<n;j++){
         scanf("%lf",&x[j]);
		 a[i]+=x[j];
         
		}
		a[i]/=n;
		for(int j=0;j<n;j++)
		c[i]+=pow((x[j]-a[i]),2);
	     s=sqrt(c[i]/n);
		printf("%.5lf\n",s);
	}
    
	return 0;
}