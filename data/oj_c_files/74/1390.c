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

int sushu(int n){
	int i;
	if(n%2==0) return 0;
	for(i=3;i<=sqrt(n);i+=2) if(n%i==0) return 0;
	return 1;
}
void main(){
	int i,x,y,m,n,k=0;
	scanf("%d%d",&m,&n);
	for(i=m;i<=n;i++){
		x=i;y=0;
		if(sushu(i)==0) continue;
		while(x>0){
			y=y*10+x%10;
			x/=10;
		}
		if(y==i){
			if(k++==0) printf("%d",i);
			else printf(",%d",i);
		}
	}
	if(k==0) printf("no");
}