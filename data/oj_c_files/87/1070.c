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
    int sz[7],i,sum=0,j=0;
	for(i=0;;i++){
        for(j=0;j<6;j++){
			scanf("%d",&(sz[j]));
		}
		if(sz[0]==0){
			break;
        }
        sz[3]=sz[3]+12;
		sum=(sz[3]-sz[0])*3600+(sz[4]-sz[1])*60+(sz[5]-sz[2]);
		printf("%d\n",sum);
	}
	return 0;
}