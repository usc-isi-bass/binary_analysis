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
	int n,i,j,axis[10000]={0},ms=0,me=0,a=0;
	struct range{
		int s,e;
	}r[50000];
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d %d",&r[i].s,&r[i].e);
		for(j=r[i].s;j<r[i].e;j++){
			axis[j]=1;
		}
	}
	for(i=0;i<n;i++){
		if(r[i].s<r[ms].s){
			ms=i;
		}
		if(r[i].e>r[me].e){
			me=i;
		}
	}
	for(i=r[ms].s;i<=r[me].e;i++){
		a+=axis[i];
	}
	if(a==r[me].e-r[ms].s){
		printf("%d %d",r[ms].s,r[me].e);
	}else{
		printf("no");
	}
	return 0;
}
