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
int n,i,sz[200][2],a=0,b=0;
scanf("%d",&n);
for(i=0;i<n;i++){
	scanf("%d%d",&sz[i][0],&sz[i][1]);
	if(sz[i][0]==0){
		if(sz[i][1]==1){
			a++;
		}else if(sz[i][1]==2){
			b++;
		}else{
			a=a;
		}
	}else if(sz[i][0]==1){
		if(sz[i][1]==2){
			a++;
		}else if(sz[i][1]==0){
			b++;
		}else{
            a=a;
		}
	}else{
		if(sz[i][1]==0){
			a++;
		}else if(sz[i][1]==1){
			b++;
		}else{
			a=a;
		}
	}
}
if(a>b){
	printf("A");
}else if(a<b){
	printf("B");
}else{
		printf("Tie");
}
	return 0;
}

