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
	int n1,i,j,hhh[k];
	double h[k][k],hh[k]={0},s[k],r[k]={0};
	scanf("%d",&n1);
	for(i=0;i<n1;i++){
	    scanf("%d",&hhh[i]);
		for(j=0;j<hhh[i];j++){
			scanf("%lf",&h[i][j]);
			hh[i]+=h[i][j];
		}
	}
	for(i=0;i<n1;i++){
		for(j=0;j<hhh[i];j++){
			r[i]+=pow(h[i][j]-hh[i]/hhh[i],2);
		}
		s[i]=sqrt(r[i]/hhh[i]);
		printf("%.5lf\n",s[i]);
	}
	return 0;
}