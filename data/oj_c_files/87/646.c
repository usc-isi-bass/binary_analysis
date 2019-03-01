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
	int s,i,n,sum;
	int a[10];
	for(i=1;i<100;i++){
		sum=0;
		for(i=0;i<6;i++){
			scanf("%d",&a[i]);
		}
		if(a[1]==0&&a[2]==0){
			break;
		}
		if(a[3]<12){
			a[3]+=12;
		}
		sum=a[3]*3600+a[4]*60+a[5]-a[0]*3600-a[1]*60-a[2];
		printf("%d\n",sum);
	}
	return 0;
}