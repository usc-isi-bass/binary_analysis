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
	int i,a,l,n;
	double d,b;
	char x[501];
	char y[501];
	

	a=0;
	l=0;
	scanf("%lf",&d);
	scanf("%s",x);
	scanf("%s",y);
	n=strlen(x);
	
	if(strlen(x)!=strlen(y)){
		printf("error");
	}else{
		for(i=0;i<n;i++){
			if((x[i]!='A'&&x[i]!='T'&&x[i]!='G'&&x[i]!='C')||
			   (y[i]!='A'&&y[i]!='T'&&y[i]!='G'&&y[i]!='C')){
			   printf("error");
			   a=1;
			   break;
			}else{
				if(x[i]==y[i]){
					l++;
				}
			}
		}
		
		if(a==0){
			b=(double)l/(double)n;
			
			if(b>=d){
				printf("yes");
			}else if(b<d){
				printf("no");
			}

		}
	}


return 0;
}