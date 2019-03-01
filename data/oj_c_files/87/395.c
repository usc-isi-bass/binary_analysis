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
	int a,b,c,d,e,f;
	int r1,r2,r3;
	for(;;){
		scanf("%d%d%d%d%d%d",&a,&b,&c,&d,&e,&f);
		if(a==0){
			return 0;
		}
		else{
			r1=12+d-a;
			r1=60*60*r1;
			r2=60*b+c-(60*e+f);
			r3=r1-r2;
			printf("%d\n",r3);
			r3=0;
		}
	}
return 0;
}