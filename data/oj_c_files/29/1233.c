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
	int m,i,j;
	double	sum=0.000,a[100];
	int n[100];
	scanf("%d",&m);
	for(i=0;i<m;i++){
		scanf("%d",&n[i]);
	sum=0.000;
	a[0]=2.000/1;
		
			for(j=0;j<n[i];j++){
				
			
			a[j+1]=1.000+1.000/a[j];
			sum+=a[j];
		}
			printf("%.3lf\n",sum);
		

	}
	return 0;
}