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
	int a,b,c,d,e,f,A,B,C,m=0;
	while(1){
	scanf("%d%d%d%d%d%d",&a,&b,&c,&d,&e,&f);
	if(a==b&&b==c&&c==d&&d==e&&e==f&&f==0)
		break;
	else{
	if(c>f){
		C=f+60-c;
		if(e-1<=b){
			B=e-1+60-b;
			A=11+d-a;
		}
		else {
			B=e-1-b;
			A=12+d-a;
		}
	}
	else if(c<=f){
		C=f-c;
		if(e<=b){
			B=e+60-b;
			A=11+d-a;
		}
		else{
			B=e-b;
			A=12+d-a;
		}
	}
	m=3600*A+60*B+C;
	printf("%d\n",m);
	}
	}
	return 0;
}