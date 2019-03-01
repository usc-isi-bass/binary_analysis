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
	int n,m,a[100],i,b[100],j;
	double c[100],sum[100]={0};
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&m);
        for(j=0;j<m;j++){
			a[0]=1;
			b[0]=2;
			a[j+1]=b[j];
			b[j+1]=a[j]+b[j];
		}
		for(j=0;j<m;j++){
             c[j]=1.0*b[j]/a[j];
			 
		}

       for(j=0;j<m;j++)
		   sum[i]+=c[j];
	   }
       for(i=0;i<n;i++)
       printf("%.3lf\n",sum[i]);
	   
	   
	return 0;
}