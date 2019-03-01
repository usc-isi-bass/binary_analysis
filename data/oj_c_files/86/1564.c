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
	int sum=0;
	int fail[100][20];
	int n,i=0,j=1,time=0;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&fail[i][0]);
		if(fail[i][0]!=0){
			for(j=1;j<=fail[i][0];j++){
				scanf("%d",&fail[i][j]);
			}
		}
	}
	for(i=0;i<n;i++){
		sum=0;
		if(fail[i][0]==0){
			sum=60;
		}else{
			j=1;
			for(time=1;time<=60;time++){
				if(sum==fail[i][j]){
					time+=2;
					j++;
				}else{
					sum++;
				}
			}
		}
		printf("%d\n",sum);
	}
	return 0;
}