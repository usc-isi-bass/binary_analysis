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
	int m,i,j;
	double a[100]={0},c=0,s=0,n;
	scanf("%d",&m);
	for(j=0;j<m;j++){
		double sum=0,ave=0, total=0,pf=0;
        scanf("%lf",&n);
		for(i=0;i<n;i++){
            
			scanf("%lf",&a[i]);
			sum+=a[i];
			ave=sum/n;
		}
		for(i=0;i<n;i++){
			
			pf=(a[i]-ave)*(a[i]-ave);
			total+=pf;
		}
		c=total/n;
		s=sqrt(c);
		printf("%.5lf\n",s);
		
	}
	return 0;
}
