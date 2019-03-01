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
	int h,l,c;
	int m[8][8],i,j;
	scanf("%d%c%d",&h,&c,&l);
	for(i=0;i<h;i++){
		for(j=0;j<l;j++){
			scanf("%d",&m[i][j]);
		}
	}
	int ma_h,r,e;
	r=0;
	e=0;
	for(j=0;j<h;j++){
		for(ma_h=0,i=0;i<l;i++){
			if(m[j][i]>m[j][ma_h])
				ma_h=i;
		}
		for(i=0;i<h;i++){
			if(m[j][ma_h]>m[i][ma_h])
				e++;
		}
		if(e==0){
			printf("%d+%d",j,ma_h);
			r++;
		}
	}
	if(r==0)
		printf("No");

	return 0;
}
