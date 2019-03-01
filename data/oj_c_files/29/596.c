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
	int m,i,j,lim[200],fm[200],fz[200];
	double res;
	scanf("%d",&m);
	for(i=0;i<m;i++){
		scanf("%d",&(lim[i]));
	}
            fm[0]=1;
			fz[0]=2;
	for(i=0;i<m;i++){
            res=2.000;
		for(j=1;j<lim[i];j++){
			fm[j]=fz[j-1];
			fz[j]=(fm[j-1]+fz[j-1]);
            res+=10*(0.1*fz[j]/fm[j]);
			
		}
			printf("%.3lf\n",res);
	}
	return 0;
}
