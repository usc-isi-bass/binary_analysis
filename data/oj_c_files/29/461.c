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
	int n[500],i,j,m,a[500];
	double b[500];
	scanf("%d",&m);
	for(i=0;i<m;i++){
		scanf("%d",&n[i]);
	}
    a[0]=1;
	a[1]=2;
	for(i=2;i<500;i++)
         a[i]=a[i-1]+a[i-2];
	for(i=0;i<m;i++){
		b[i]=0;
		for(j=0;j<n[i];j++){
			b[i]+=a[j+1]*1.0/a[j];
		}
		printf("%.3lf\n",b[i]);
	}
	return 0;
}