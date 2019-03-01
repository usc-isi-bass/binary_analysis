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
	int i;
	double a,k=0;
	char x[500],y[500];
	scanf("%lf",&a);
	scanf("%s",x);
	scanf("%s",y);
	if(strlen(x)!=strlen(y)){
		printf("error");
		return 0;
	}else{
		for(i=0;x[i]!='\0';i+=1){
			if((x[i]!='A'&&x[i]!='T'&&x[i]!='C'&&x[i]!='G')||(y[i]!='A'&&y[i]!='T'&&y[i]!='C'&&y[i]!='G')){
				printf("error");
				return 0;
			}
		}
		for(i=0;x[i]!='\0';i+=1){
			if(x[i]==y[i]){
				k+=1;
			}
		}
		if(k/i>a){
			printf("yes");
		}else{
			printf("no");
		}
	}
	return 0;
}