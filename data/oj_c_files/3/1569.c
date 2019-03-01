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
{   int i=0,e=0,a[2][1000],c,d,t=0;
    scanf("%d %d",&c,&d);
	for(i=0;i<c;i++){
		scanf("%d",&a[0][i]);
	}
	for(i=0;i<c-1;i++){
		for(e=i+1;e<c-1;e++){
			
			if(a[0][i]+a[0][e]==d){
				t++;}else{continue;}

		}
	}
	if(t==0){printf("no");}else{printf("yes");}
	return 0;
}