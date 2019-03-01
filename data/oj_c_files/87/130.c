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
	int sum=0;
	for(;;){
		scanf("%d%d%d%d%d%d\n",&a,&b,&c,&d,&e,&f);
		sum=(d+12-a)*3600+(e-b)*60+f-c;
		if(a==0){
			return 0;
		}
		printf("%d\n",sum);		
		sum=0;
	}

}
