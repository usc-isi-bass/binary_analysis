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
	int fz[100],fm[100];
	int m;
	int sm[100];
	int i,j,k,l;
	double a;
	double sum;



	scanf("%d",&m);
		for(i=0;i<m;i++){
			scanf("%d",&sm[i]);
		}
		fz[0]=2;
		fm[0]=1;

	for(i=0;i<m;i++){
		sum=2;
		for(k=1;k<sm[i];k++){
			fz[k]=fz[k-1]+fm[k-1];
			fm[k]=fz[k-1];
			a=1.0*fz[k]/fm[k];
			sum+=a;
			
			}
		printf("%.3lf\n",sum);
	}
	return 0;
}
