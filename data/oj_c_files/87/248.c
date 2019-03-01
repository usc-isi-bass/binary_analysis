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
	int r=0;
	while(1){
		r=0;
		scanf("%d%d%d%d%d%d",&a,&b,&c,&d,&e,&f);
		if(a==0){break;}
		d+=12;
		r+=3600-(b*60+c);
		r+=e*60+f;
		r+=(d-(a+1))*3600;
		printf("%d\n",r);
	}
	return 0;
}