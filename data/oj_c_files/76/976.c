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
	   
	int i,n,t[50000]={0},f=0,d,k,l,h;
	double m=10000,y=1,s;
	scanf("%d",&n);
	struct qj{
		double a,b;
	}*q;
	q=(struct qj*)malloc(sizeof(struct qj)*n);
	for(i=0;i<n;i++){
		scanf("%lf%lf",&(q[i].a),&(q[i].b));
		if(q[i].a<=m){
			m=q[i].a;
		}if(q[i].b>=y){
			y=q[i].b;
		}
	}
	for(s=m,d=0;s<=y;s+=0.5,d++){
		for(i=0;i<n;i++){
			if(s>=q[i].a&&s<=q[i].b){
				t[d]=1;
				break;
			}
		}
	}for(k=0;k<d;k++){
	    if(t[k]!=1){
		   f=1;
		   break;
		} 
	}
	if(f==1){  
		printf("no");
	}
	if(f==0){l=(int)m;h=(int)y;
		printf("%d %d",l,h);
	}
	free(q);
	return 0;
}