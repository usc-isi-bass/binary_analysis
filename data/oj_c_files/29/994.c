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
	int m,n,i,j,fenzi=2,fenmu=1;
	double result[100]={0};
	scanf("%d",&m);
	
	for(i=0;i<m;i++){
		scanf("%d",&n);
		fenzi=2;
		fenmu=1;
		for(j=1;j<=n;j++){
			result[i]+=1.0*fenzi/fenmu;
			fenzi=fenmu+fenzi;
			fenmu=fenzi-fenmu;
			
		}
	}
	for(i=0;i<m;i++){
		printf("%.3lf\n",result[i]);
	}
	return 0;
}