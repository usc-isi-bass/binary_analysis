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
    int n;
	int r[200],e[200];
	int i,a=0,b=0;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d %d",&r[i],&e[i]);
		if((r[i]==0&&e[i]==1)||(r[i]==1&&e[i]==2)||(r[i]==2&&e[i]==0)){
			a++;}
    else if((e[i]==0&&r[i]==1)||(e[i]==1&&r[i]==2)||(e[i]==2&&r[i]==0)){
			b++;}
	}
	if(a>b){printf("A");};
	if(a<b){printf("B");};
	if(a==b){printf("Tie");};
	return 0;
}