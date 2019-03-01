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
	int n,i,m,k;
	double sz[1000],s=0,r=0,result;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		s=0;
		r=0;
		scanf("%d",&m);
		for(k=0;k<m;k++){
			scanf("%lf",&sz[k]);
            s+=sz[k];		
		}
		for(k=0;k<m;k++){
			r+=(sz[k]-s/(m*1.0))*(sz[k]-s/(m*1.0))/(m*1.0);
		}
		result=pow(r,0.5);
		printf("%.5lf\n",result);
	}
	return 0;
}