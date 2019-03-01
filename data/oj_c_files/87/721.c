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
	int a,b,c,d,e,f,i,shijian[100],n=0,M,N;
	for(i=0;;i++){
		scanf("%d %d %d %d %d %d",&a,&b,&c,&d,&e,&f);
		n++;
		if(a==0)
			break;
		M=a*3600+b*60+c;
		N=(12+d)*3600+e*60+f;
		shijian[i]=N-M;
	}
	for(i=0;i<n-1;i++){
		printf("%d\n",shijian[i]);
	}
    return 0;
}
