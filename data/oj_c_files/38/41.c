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
	int k,i,j;
	double sz[1000],ave,result=0,add,sum=0;
	

	scanf("%d",&k);

	for(i=0;i<k;i++){
		int n;
		sum=0;
		result=0;
		scanf("%d",&n);
		for(j=0;j<n;j++){
			scanf("%lf",&sz[j]);
			
		}
		double *p;
		for(p=sz;p<sz+n;p++){
			sum+=*p;
		}
		ave=sum/(double)n;
		
		for(p=sz;p<sz+n;p++){
			result+=(*p-ave)*(*p-ave);
		}
		add=sqrt(result/(double)n);
		printf("%.5lf\n",add);
	}
	
	return 0;
}
