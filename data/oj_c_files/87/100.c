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
	int i,t,time[1000][6],jg[1000]={0};
	for(i=0;1;i++){
		scanf("%d %d %d %d %d %d",&time[i][0],&time[i][1],&time[i][2],&time[i][3],&time[i][4],&time[i][5]);
		if(time[i][0]==0){
			break;
		}
	}
	t=i;
	for(i=0;i<t;i++){
		jg[i]+=(12-time[i][0])*60*60-time[i][1]*60-time[i][2];
		jg[i]+=time[i][3]*60*60+time[i][4]*60+time[i][5];
		printf("%d\n",jg[i]);
	}
	return 0;
}