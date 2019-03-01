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

int main(int argc, char* argv[])
{
	int n,i;
	float a[100],b[100],c[100];
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%f%f%f",&a[i],&b[i],&c[i]);
	}
	for(i=0;i<n;i++){
        if(a[i]!=0){
			double dt,m,n,x1,x2;
			dt=b[i]*b[i]-4*a[i]*c[i];
			
				m=-(b[i]/(2*a[i]));
			n=sqrt(fabs(dt))/(2*a[i]);
			if(dt==0){
				printf("x1=x2=%.5f\n",m);
			}
			else if(dt>0){
				x1=m+n;
				x2=m-n;
				printf("x1=%.5f;x2=%.5f\n",x1,x2);
			}
			else{
				printf("x1=%.5f+%.5fi;",m,n);
                printf("x2=%.5f-%.5fi\n",m,n);
			}
			}
		}


	return 0;
}