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
	int n,j,i,t,k=0,sr[501]={0},px[501]={0};
    scanf("%d",&n);
	for(i=1;i<=n;i++){
	scanf("%d",&sr[i]);
	}
    for(i=1;i<=n;i++){
		if(sr[i]%2==1){
		k++;
		px[i]=sr[i];}
	}
	for(j=1;j<=n;j++){
		for(i=1;i<n;i++){
			if(px[i]<px[i+1]){
			t=px[i];
			px[i]=px[i+1];
			px[i+1]=t;
			}
		}
	}
	for(i=k;i>=1;i--){
	printf("%d",px[i]);
	if(i==1){
	break;}
	printf(",");
	}




return 0;
}
