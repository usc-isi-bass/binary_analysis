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
	int a,b,c,mid,i,n,high,low,stop;
	a=0;
	b=0;
	c=0;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d %d",&high,&low);
		if((high>=90)&&(high<=140)&&(low<=90)&&(low>=60)){
			a++;
			c=a;
		}else{
			//if(n==1){
		//		printf("0");
		//	}
			if(a>0){
				mid=b;
				if(a>mid){
					b=a;
				}				
				a=0;
			}
		}
	}
	if(c<b){
		printf("%d",b);
	}else{
		printf("%d",c);
	}
	return 0;
}