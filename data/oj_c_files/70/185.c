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
	int n,i,r;
	double M,L;
	double max[10];
	double x[10];
	double y[10];
	scanf("%d",&n);
    for(i=0;i<n;i++){
		scanf("%lf%lf",&x[i],&y[i]);
	}
    for(i=0;i<n;i++)
	{
		for(r=i+1,max[i]=0;r<n;r++){

		        double l;
		        l=(x[r]-x[i])*(x[r]-x[i])+(y[r]-y[i])*(y[r]-y[i]);
                if (max[i]<l)
			    max[i]=l;
		}
		
        if (i!=0){
			if (max[i]>=max[i-1])
				M=max[i];
			else {
				max[i]=max[i-1];
			    M=max[i];
			}
		};
		
	};
	L=sqrt(M);
	printf("%.4f\n",L);
	return 0;
}
