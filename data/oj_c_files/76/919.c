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

int main()
{
	int n,d=1,i,j,min,max=0;
	int qd[50000],zd[50000],sz[50000]={0};
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d %d",&qd[i],&zd[i]);
	}
	min=qd[0];
	for(i=0;i<n;i++){
		if(qd[i]<min){
			min=qd[i];
		}
		if(zd[i]>max){
			max=zd[i];
		}
	}
    for(i=0;i<n;i++){
		for(j=qd[i];j<zd[i];j++){
			sz[j]=1;
		}
	}
	for(i=min;i<max;i++){
		d*=sz[i];
	}
	if(d==0){
		printf("no");
	}
	else{
		printf("%d %d",min,max);
	}
	return 0;
}
