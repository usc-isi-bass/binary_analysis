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
	int m,d,w,i;
	scanf("%d",&w);
	m=1;
	d=1;
    for(i=1;i<=364;i++){
		if(d==31){
			d=1;
			m=m+1;
		}else if(d==30&&(m==4||m==6||m==9||m==11)){
			d=1;
			m=m+1;
		}else if(d==28&&m==2){
			d=1;
			m=m+1;
		}else{
			d=d+1;
		}
		w++;
		w=w%7;
		if(d==13&&w==5){
			printf("%d\n",m);
		}
	}
	return 0;
}
