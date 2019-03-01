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
int m,i,n,a,b,c,d,e,f;
	for(i=0;i<20;i++){

		scanf("%d%d%d%d%d%d",&a,&b,&c,&d,&e,&f);
			scanf("/n");
			m=a+b+c+d+e+f;
			if(m==0){
			break;
			}else{

		d+=12;

	//	if(e<b){
	//	e+=60;
	//	}
	//	if(f<c){
	//	f+=60;
	//	}
		n=(d-a)*3600+(e-b)*60+(f-c);
	
		printf("%d\n",n);
		}
	}










return 0;
}
