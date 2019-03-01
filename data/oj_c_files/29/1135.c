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
	int m,n;
	scanf("%d",&m);
	for (int z=0;z<m;z++){
		scanf("%d",&n);
		double sum=0;
		int x=1,y=2;
		int tmp;
		for(int i=0;i<n;i++){
			sum=sum+(double)y/x;
			tmp=y;
			y=x+y;
			x=tmp;
		}
		if(z!=0){
			printf("\n");
		}
		printf("%.3lf",sum);
	}

	return 0;
}