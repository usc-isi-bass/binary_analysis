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
	int c,i,a,b,n[100]={0},k=0,j,e;
	scanf("%d",&c);
	for(i=0;i<c;i++){
		scanf("%d%d",&a,&b);
		if((a>=90)&&(a<=140)&&(b>=60)&&(b<=90))
			n[k]+=1;
		else
			k+=1;
	}
	for(j=1;j<=k+1;j++){
	for(i=0;i<k+1-j;i++){

		if(n[i]<n[i+1]){
			e=n[i];
			n[i]=n[i+1];
			n[i+1]=e;
		}
	}
	}
	printf("%d",n[0]);



	return 0;
}