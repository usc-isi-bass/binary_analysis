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

int sl(int n){
	if(n==1){
		return 1;
	}
	else if(n==2){
		return 2;
	}
	else{
		return sl(n-1)+sl(n-2);
	}
	
}
int main()
{
	int m,n,j,i;
	double sum=0;
	scanf("%d",&m);
	for(i=0;i<m;i++){
		scanf("%d",&n);
		sum=0;
		for(j=1;j<=n;j++){
			sum+=(double)sl(j+1)/sl(j);
		}
		printf("%.3lf\n",sum);
	}

	return 0;
}