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
	int n,i,min,max,c=0,j, qs[50000],zd[50000];
	double g;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d%d",&qs[i],&zd[i]);
	}
	for(i=0;i<n;i++){
		if(i==0||qs[i]<min)
			min=qs[i];
		if(i==0||zd[i]>max)
			max=zd[i];
	}
    for(g=(1.0*min+0.5);g<=(1.0*max);g+=1.0){
		for(j=0;j<n;j++){
			if(g>=1.0*qs[j]&&g<=1.0*zd[j]){
				c++;
				break;
			}
		}
	}
	if(c==max-min){
		printf("%d %d\n",min,max);
	}else{
		printf("no\n");
	}
	return 0;
}



