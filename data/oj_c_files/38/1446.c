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
	int k,n,i,j;
	double x[4000][101],s[4000],a[4000],t[4000];
	scanf("%d",&k);
	for(i=0;i<k;i++){
		a[i]=0;
		scanf("%d",&n);
		for(j=0;j<n;j++){
			scanf("%lf",&x[i][j]);
			a[i]+=x[i][j];
		}
		a[i]=a[i]/n;
		t[i]=0;
		for(j=0;j<n;j++){
			t[i]+=(x[i][j]-a[i])*(x[i][j]-a[i]);
		}
		s[i]=sqrt(t[i]/n);
	}
	for(i=0;i<k;i++){
		printf("%.5lf\n",s[i]);
	}
	return 0;
}
