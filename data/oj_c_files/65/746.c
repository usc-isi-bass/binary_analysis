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
	int n, i, a[1]={0}, b[1]={0}, m, k, c, d;
	scanf("%d", &n);
	for(i=0;i<n;i++){
		scanf("%d%d", &m, &k);
		if(m==0&&k==1){
			a[0]++;
		}
		if(m==1&&k==0){
			b[0]++;
		}
		if(m==1&&k==2){
			a[0]++;
		}
		if(m==2&&k==1){
			b[0]++;
		}
		if(m==0&&k==2){
			b[0]++;
		}
		if(m==2&&k==0){
			a[0]++;
		}
		if(m==k){
			a[0]++;
			b[0]++;
		}
	}
	c=a[0];
	d=b[0];
	if(c>d){
		printf("A");
	}
	if(c<d){
		printf("B");
	}
	if(c==d){
		printf("Tie");
	}
	return 0;
}