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
	struct point{
		int a,b;
	}p[50000];

	int i,k,n,l,r;
	double j;

	scanf("%d",&n);
	
	for(i=0;i<n;i++){
		scanf("%d%d",&p[i].a,&p[i].b);
	}
	l=p[0].a;
	r=p[0].b;


	for(i=1;i<n;i++){
		if(p[i].a<l){
			l=p[i].a;
		}
		if(p[i].b>r){
			r=p[i].b;
		}
	}

	for(j=l+0.5;j<r;j++){
		k=0;
		for(i=0;i<n;i++){
			if(j<p[i].a||j>p[i].b){
				k++;
			}
		}
		if(k==n){
			printf("no");
			break;
		}
	}
	if(j==r+0.5){
		printf("%d %d",l,r);
	}





	return 0;
}
