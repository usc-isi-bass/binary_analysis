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
	int n,i,j,a=0,b[10000]={0},c=0;
	scanf("%d",&n);
	for(i=3;i<=n;i+=2){
		a=0;
		for(j=1;j<=i;j++){
			if(i%j==0){
				a++;
		}}
		if(a==2){
			b[c]=i;
			c++;
	}}
	for(i=0;b[i]!=0;i++){
		if(b[i]+2==b[i+1]){
			printf("%d %d\n",b[i],b[i+1]);
	}}
	if(c<2)
		printf("empty");
	return 0;
}
