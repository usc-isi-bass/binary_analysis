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
	int a,b,c,d,e,f,g;
	while(1){
	    scanf("%d%d%d%d%d%d",&a,&b,&c,&d,&e,&f);
		if(!(a==0&&b==0&&c==0&&d==0&&e==0&&f==0)){
    	    d=d+12;
    	    g=(d-a)*3600+e*60+f-b*60-c;
	        printf("%d\n",g);
		}else{
			break;
		}
	}
	return 0;
}