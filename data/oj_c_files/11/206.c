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
	int y,m,d,i,D;
	int p[12]={31,28,31,30,31,30,31,31,30,31,30,31};
    D=0;
	scanf("%d%d%d",&y,&m,&d);
	if(((y%4==0)&&(y%100!=0))||((y%400)==0)){
		for(i=0;i<m-1;i++){
			D=D+p[i];
		}
		D=D+d+1;
		printf("%d",D);
	}
	else{
		for(i=0;i<m-1;i++){
			D=D+p[i];
		}
		D=D+d;
		printf("%d",D);
	}
	return 0;
	}

