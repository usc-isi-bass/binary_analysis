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
	int a,b,c,d,e,f,y;
	while(1){
		scanf("%d %d %d %d %d %d",&a,&b,&c,&d,&e,&f);
		if(a==0){
			break;
		}
		d=d+12;
		if(e>=b&&f>=c){
			y=(d-a)*3600+(e-b)*60+f-c;
		}else if(e>=b&&f<=c){
			y=(d-a)*3600+(e-b-1)*60+60+f-c;
		}else if(e<=b&&f>=c){
			y=(d-a-1)*3600+3600+(e-b)*60+f-c;
		}else if(e<=b&&f<=c){
			y=(d-a-1)*3600+3600+(e-b-1)*60+60+f-c;
		}
		printf("%d\n",y);
	}
	return 0;

}