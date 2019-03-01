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
	int shui,qi,ms;
	int m,n,o,p,q,r;
	int js=0,pd=1;
	for(js=0;pd!=0;js++){
	
		scanf("%d%d%d%d%d%d",&a,&b,&c,&d,&e,&f);
		if((a==0)&&(b==0)&&(c==0)&&(d==0)&&(e==0)&&(f==0)){
			pd=0;
		}
		else{
		shui=a*3600+b*60+c;
		qi=(d+12)*3600+e*60+f;
		ms=qi-shui;
		if(js!=0){
			printf("\n");
		}
		printf("%d",ms);
	}
	}
	return 0;
}


