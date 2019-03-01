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
	int i,n,j,a,b;
	a=0;
	scanf("%d\n",&n);
	int zl[A][A];
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			scanf("%d",&(zl[i][j]));
		}
	}
	for(i=1;i<(n-1);i++){
		for(j=1;j<(n-1);j++){
			if((zl[i][j])==0){
				a++;
			}
		}
	}
	b=(((a*a)/16)-(a/2)+1);
	printf("%d\n",b);
	return 0;
}
