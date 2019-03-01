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
	int m,n,c,i,j,r,d,e,min,max,b[8],a[8][8];
	scanf("%d,%d",&m,&n);
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<m;i++){
		max=a[i][0];
		b[i]=0;	
		for(j=0;j<n;j++){
			if(a[i][j]>max){
				max=a[i][j];
				b[i]=j;
			}
		}
	}
	for(i=0;i<m;i++){
		min=a[i][b[i]];
		c=1;
		for(r=0;r<m;r++){
			if(a[r][b[i]]<min){
				c=0;
				break;
			}
		}
		if(c==1){
			d=i;
			e=b[i];
			break;
		}
	}
	if(c==1){
		printf("%d+%d",d,e);
	}
	else if(c==0){
		printf("No");
	}
	return 0;
}
