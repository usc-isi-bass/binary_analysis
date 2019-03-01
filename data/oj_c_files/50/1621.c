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

int main(int argc, char* argv[])
{
	int w;
	scanf("%d",&w);
	int i;
	for(i=1;i<=12;i++){
		if((w+12)%7==5){
			printf("%d\n",i);
		}
		if(i==1||i==3||i==5||i==7||i==8||i==10||i==12){
			w=w+31;
		}else if(i==2){
			w=w+28;
		}else{
			w=w+30;
		}
	}
	return 0;
}