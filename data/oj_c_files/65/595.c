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
	int n,a[100],b[100],i,sy[100],P=0,A=0,B=0;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d%d",&a[i],&b[i]);
		if(a[i]==b[i]){
			sy[i]=0;P++;}
		else if(a[i]-b[i]==-1 || a[i]-b[i]==2){
			sy[i]=1;A++;}
		else {
			sy[i]=-1;B++;}
	}
	for(i=0;i<n;i++){
		if(A>B){
			printf("A\n");break;}
		else if(A<B){
			printf("B\n");
			break;
		}else{
			printf("Tie\n");
			break;
		}
	}
	return 0;
}
