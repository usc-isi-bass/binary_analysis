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
	int n,a=0,b=0,x[200],y[200];
	scanf("%d",&n);

	for(int i=0;i<n;i++){
		scanf("%d%d",&(x[i]),&(y[i]));
		if(y[i]-x[i]==1||x[i]-y[i]==2){
			a++;
		}else if(x[i]-y[i]==1||y[i]-x[i]==2){
			b++;
		}else if(x[i]==y[i]){
			continue;
		}
	}
	if(a==b){
		printf("Tie");
	}else if(a>b){
		printf("A");
	}else if(a<b){
		printf("B");
	}
	
	return 0;
}
