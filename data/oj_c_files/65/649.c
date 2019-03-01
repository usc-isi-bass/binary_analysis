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
	int a;
	int b;
	int n;
	int i;
	a=0;
	b=0;
	int zzd[202];
	int hzy[202];
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&zzd[i]);
		scanf("%d",&hzy[i]);
	}
	for(i=0;i<n;i++){
		if(zzd[i]==0&&hzy[i]==1){
			a++;
		}
		if(zzd[i]==0&&hzy[i]==0){
			a=a;
		}
		if(zzd[i]==0&&hzy[i]==2){
			b++;
		}
		if(zzd[i]==1&&hzy[i]==1){
			a=a;
		}
		if(zzd[i]==1&&hzy[i]==0){
			b++;
		}
		if(zzd[i]==1&&hzy[i]==2){
			a++;
		}
		if(zzd[i]==2&&hzy[i]==0){
		    a++;
		}
		if(zzd[i]==2&&hzy[i]==1){
			b++;
		}
		if(zzd[i]==2&&hzy[i]==2){
			a=a;
		}
	}
	if(a>b){
	printf("A");
	}
	else if(a<b){
	printf("B");
	}
	else if(a=b){
	printf("Tie");
	}
	return 0;
}
		
