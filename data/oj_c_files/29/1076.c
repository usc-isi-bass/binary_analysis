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
	int m,i,j,n;
	double c,a,b,d,sz[100];
	scanf("%d",&m);
	for(i=0;i<m;i++){
		scanf("%d",&n);
		c=0;
		a=2;b=1;
		for(j=0;j<n;j++){
			c+=a/b;
			d=b;
			b=a;
			a=a+d;
		}
		sz[i]=c;
	}	
	for(i=0;i<m;i++){
	printf("%.3lf\n",sz[i]);
	}
	return 0;
}
