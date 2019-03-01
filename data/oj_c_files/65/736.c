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

int jg(int a,int b);
int main(){
	int n,i;
	int ay=0,by=0,pj=0;
	int sza[max],szb[max];
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d%d",&sza[i],&szb[i]);
	}
	for(i=0;i<n;i++){
		if(jg(sza[i],szb[i])==1){
			ay++;
		}else{
			if(jg(sza[i],szb[i])==2){
				by++;
			}else{
				pj++;
			}
		}
	}
	if(ay==by){
		printf("Tie");
	}else{
		if(ay>by){
			printf("A");
		}else{
			printf("B");
		}
	}
	return 0;
}




int jg(int a,int b){
	if((a==0&&b==0)||(a==1&&b==1)||(a==2&&b==2)){
		return 0;
	}else{
		if((a==0&&b==1)||(a==1&&b==2)||(a==2&&b==0)){
			return 1;
		}else{
			return 2;
		}
	}
}
