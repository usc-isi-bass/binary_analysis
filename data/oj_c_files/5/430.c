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
	double x,p;
	int i,l,k=0,c=1;
	scanf("%lf",&x);
	char c1[501],c2[501];
	scanf("%s",c1);
	scanf("%s",c2);
	l=strlen(c1);
	for(i=0;i<l;i++){
		if((c1[i]!='A')&&(c1[i]!='T')&&(c1[i]!='C')&&(c1[i]!='G')){
			printf("error");
			c=0;
			break;
		}
		if((c2[i]!='A')&&(c2[i]!='T')&&(c2[i]!='C')&&(c2[i]!='G')){
			printf("error");
			c=0;
			break;
		}
		if(c1[i]==c2[i]){
			k++;
		}
	}
	if(c){
		p=((double)k)/((double)l);
		if(p>x){
			printf("yes");
		}
		else{printf("no");}
	}
	return 0;
}