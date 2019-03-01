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
	int day[12]={31,28,31,30,31,30,31,31,30,31,30,31};
	int w,i;
	scanf("%d",&w);
	w=(w+12)%7;
	if(w==5){
		printf("1\n");
	}
	for(i=0;i<11;i++){
		w=(w+day[i])%7;
		if(w==5){
			printf("%d\n",i+2);
		}
	}
	return 0;
}
