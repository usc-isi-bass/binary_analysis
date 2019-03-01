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
	int sum=0,max=0;
	int pre[101][2];
	int n,i=0;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d %d",&pre[i][0],&pre[i][1]);
	}
	for(i=0;i<n;i++){
		if((pre[i][0]>=90)&&(pre[i][0]<=140)&&(pre[i][1]>=60)&&(pre[i][1]<=90)){
			sum++;
			if(sum>max){
				max=sum;
			}
		}else{
			sum=0;
		}
	}
	printf("%d\n",max);
	return 0;
}
