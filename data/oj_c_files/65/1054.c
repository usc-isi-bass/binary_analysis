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
	int n,i,a,b,m,p;
	m=0;
	p=0;
	int sz[200];
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d %d",&a,&b);
		if(a-b==1||b-a==2){
			sz[m]=0;
			m++;
		}else if(a!=b){
			sz[m]=1;
			m++;
		}
	}
	for(i=0;i<m;i++){
		p+=sz[i];
	}
	if((p*2)>m){
		printf("A");
	}else if((p*2)==m){
		printf("Tie");
	}else{
		printf("B");
	}
	return 0;
}
