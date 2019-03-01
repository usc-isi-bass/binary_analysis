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
	int r,c,k,i,j,n,e,a,b;
	double shu[100];
	               
	int sz[100][100];
	for(n=0;n<100;n++){
		shu[n]=0.0;
	}     
	scanf("%d",&k);
	for(n=0;n<k;n++){
		scanf("%d",&r);
		for(i=0;i<r;i++){
			if(i==0){
				a=2;
				b=1;
			}
			else{
				e=a;
				a=a+b;
				b=e;
			}
			shu[n]+=1.0*a/b;
			
		}
		printf("%.3lf\n",shu[n]);
	}

	
	return 0;
}






