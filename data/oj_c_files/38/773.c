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


int main(){
	int k,i,n,j;
	double he=0;
	double sz[100],sum=0;
	scanf("%d",&k);
	for(i=0;i<k;i++){
		scanf("%d",&n);
		for(j=0;j<n;j++){
				scanf("%lf",&sz[j]);
				sum+=sz[j];
		}
		//printf("%.5lf\n",sum);
		
		double x=sum/(double)n;
		//printf("%.5lf\n",x);
		for(j=0;j<n;j++){
			double yige=(sz[j]-x)*(sz[j]-x);
		
			he += yige;
		}
		double s=sqrt(he/n);
	printf("%.5lf\n",s);
	sum=0;
	he=0;
	}



	
	return 0;
}


		

	


