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

int main (){
	double m,x;
	int t=0,a,b,u=0;
	char ji[501],yin[501];
	scanf("%lf",&m);
	scanf("%s",ji);
	scanf("%s",yin);
	a=strlen(ji);
	b=strlen(yin);
	if(a!=b){
		printf("error");
	}else{
		for(int q=0;q<a;q++){
			if((ji[q]!='A'&&ji[q]!='T'&&ji[q]!='C'&&ji[q]!='G')||(yin[q]!='A'&&yin[q]!='C'&&yin[q]!='T'&&yin[q]!='G')){
				u=1;
			}
		}
		if(u==1){
			printf("error");
		}else{
           for(int h=0;h<a;h++){
			if(ji[h]==yin[h]){
				t++;
			}
		}
		x=1.0*t/a;
		if(x>m){
			printf("yes");
		}else{
			printf("no");
		}
	}
	}
	return 0;
}