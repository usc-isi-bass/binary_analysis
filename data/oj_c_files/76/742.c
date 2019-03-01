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
	int a[10010]={0};
	int n,i,j,le,ri,st,en,bo=1;
	scanf("%d",&n);
	scanf("%d %d",&le,&ri);
	for(i=le;i<ri;i++){
		a[i]=1;
	}
	for(i=1;i<=n-1;i++){ 
			scanf("%d %d",&st,&en);
		if(st<le){
			le=st;
		}
		if(en>ri){
			ri=en;
		}
		for(j=st;j<en;j++){
	         	a[j]=1;
			}
		}
	for(i=le;i<ri;i++){
		if(a[i]==0){
			bo=0;
			break;
		}
	}
	if(bo==0){
		printf("no");
	}else{
		printf("%d %d",le,ri);
	}
	return 0;
}