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
	int n,i,j,judge,p,q,m;
	double mid,b[110]={0},f,y,total,a;
	scanf("%d",&n);
	for (i=1;i<=n;i++){
		scanf("%d",&m);
		total=0;
		for (j=1;j<=m;j++){
			scanf("%lf",&b[j]);
			total=total+b[j];
		}
		a=total/m;
		mid=0;
		for (j=1;j<=m;j++){
			mid=mid+(b[j]-a)*(b[j]-a)/m;
		}
		f=sqrt(mid);
		printf("%.5lf\n",f);
	}
	return 0;
}

