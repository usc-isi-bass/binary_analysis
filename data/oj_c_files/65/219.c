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
	int a,b,c,d,n,i,t;
	scanf("%d",&n);
	c=0;d=0;
	for(i=0;i<n;i++){
		scanf("%d%d",&a,&b);
		t=a-b;
		if(t==-1||t==2){
			c=c+1;
		}else if(t!=0){
			d=d+1;
		}
	}
	if(c>d){
		printf("A");
	}else if(c<d){
		printf("B");
	}else{
		printf("Tie");
	}
	return 0;
}
