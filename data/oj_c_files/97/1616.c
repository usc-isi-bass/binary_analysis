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
	int i,qian;
	int yu[6]={0};
	int zhang[6]={0};
	scanf("%d",&qian);
	zhang[0]=qian/100;
	yu[0]=qian-zhang[0]*100;
	zhang[1]=yu[0]/50;
	yu[1]=yu[0]-zhang[1]*50;
	zhang[2]=yu[1]/20;
	yu[2]=yu[1]-zhang[2]*20;
	zhang[3]=yu[2]/10;
	yu[3]=yu[2]%10;
	zhang[4]=yu[3]/5;
	yu[4]=yu[3]%5;
	zhang[5]=yu[4];
	for(i=0;i<6;i++){
		printf("%d\n",zhang[i]);
	}
	return 0;
}