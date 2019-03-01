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
	int sz[8][8];
	int r,l;
	scanf("%d,%d",&r,&l);
	int i,j;
	for(i=0;i<r;i++){
		for(j=0;j<l;j++){
			scanf("%d",&sz[i][j]);
		}
	}
	int max=0,min=0,m,a=-1,b=-1;
	for(i=0;i<r;i++){
		for(j=0;j<l;j++){
			if(sz[i][max]<sz[i][j]){
				max=j;
			}
		}
		for(m=0;m<r;m++){
				if(sz[min][max]>sz[m][max]){
					min=m;
				}
			}
		    if(min==i){
				a=min;
				b=max;
			}
	}	
	if(a==-1){
		 printf("No\n");
	}
	else if(a!=-1){
		printf("%d+%d\n",a,b);
	}
	return 0;
}
		
