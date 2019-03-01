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

int fb(int a){
	int f[10000];
	f[1]=1;
	f[2]=2;
	int i;
	for(i=3;i<=a;i++){
		f[i]=f[i-1]+f[i-2];
	}
	return f[a];
}
int main(){
	int m;
	double sum=0;
	scanf("%d",&m);
	int i,n,k;
	for(i=0;i<m;i++){
		scanf("%d",&n);
		for(k=1;k<=n;k++){
			sum+=1.0*fb(k+1)/fb(k);
		}
		printf("%.3lf\n",sum);
		sum=0.0;
	}
	return 0;
}

