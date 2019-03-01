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
	int n,i,y=0,j,c,d;
	scanf("%d",&n);
	int a[10001]={0},b[10001]={0};
	for(i=0;;i++){
		scanf("%d %d",&c,&d);
		if((c!=0)||(d!=0)){
			a[d]++;
			b[c]--;
		}
		if((c==0)&&(d==0)){break;}
	}
	for(j=0;j<n;j++){
		if((a[j]==n-1)&&(b[j]==0)){
		 printf("%d\n",j);
		 y=1;
		}
	}
		if(y==0){
			printf("NOT FOUND\n");
		}
	return 0;
}