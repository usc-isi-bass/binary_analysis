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
	int a,b,n,i,x=0,m=0;
	scanf("%d",&n);
    if(n==1){
		scanf("%d %d",&a,&b);
		if((a>=90)&&(a<=140)&&(b>=60)&&(b<=90)){
			printf("1");
		}else{
			printf("0");
		}
	}
    if(n!=1){
	for(i=0;i<n;i++){
		scanf("%d %d",&a,&b);
		   if((a>=90)&&(a<=140)&&(b>=60)&&(b<=90)){
			x++;
		   }else{
			   if(x>m){
				   m=x;
			   }
			   x=0;
		 }
	}
	if(x>m){
		m=x;
	}
	printf("%d",m);
	}
	return 0;
}