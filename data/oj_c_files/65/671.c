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
	int i,n,l=0,m=0;
	int a[max],b[max];
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d %d",&(a[i]),&(b[i]));
	}
	for(i=0;i<n;i++){
		if(a[i]-b[i]==1||b[i]-a[i]==2){
			l++;}
		else if(a[i]-b[i]==-1||b[i]-a[i]==-2){
			m++;}
	}
	if(m>l){
		printf("A");
	}else if(m==l){
		printf("Tie");
	}else if(m<l){
		printf("B");
	}
	return 0;
}