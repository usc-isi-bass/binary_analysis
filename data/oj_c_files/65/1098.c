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
	int n,i,a,b,c;
	c=0;
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		scanf("%d %d",&a,&b);
		if((a==0&&b==1)||(a==1&&b==2)||(a==2&&b==0)){
			c++;
		}else if(a==b){
		c+=0;
		}else{
			c--;
		}
	}
	if(c>0){
	printf("A");
	}else if(c==0){
	printf("Tie");
	}else{
	printf("B");
	}




	return 0;
}

