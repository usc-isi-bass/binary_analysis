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

void main(){
	int m,n,i,j,k,a,b=0,c=0;
	int p[10][10];
	scanf("%d,%d",&n,&m);
	for (j=0;j<n;j++){
		for (i=0;i<m;i++){
			scanf("%d",&p[j][i]);
		}
	}
	for (j=0;j<n;j++){
		a=0;
		for (i=0;i<m;i++){
			if(p[j][i]>a)
				a=p[j][i];
		}
		for (i=0;i<m;i++){
			if (p[j][i]==a){
				for (k=0;k<n;k++){
					if (p[k][i]<a)
						b=1;
				}
				if (b==0){
					printf("%d+%d",j,i);
					c=1;
				}
			}
		}
	}
	if (c==0)
		printf("No");
}
