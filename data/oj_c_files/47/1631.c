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
	int n,i,e;
	scanf("%d",&n);
	int sz[LEN];
	for(i=0;i<n;i++){
		scanf("%d",&sz[i]);}
	if(n%2==1){
		for(i=0;i<n/2+1;i++){
			e=sz[i];
			sz[i]=sz[n-i-1];
			sz[n-i-1]=e;}
		printf("%d",sz[0]);
	for(i=1;i<n;i++){
		printf(" %d",sz[i]);}
	}else{
		for(i=0;i<n/2;i++){
			e=sz[i];
			sz[i]=sz[n-i-1];
			sz[n-i-1]=e;}
		printf("%d",sz[0]);
	for(i=1;i<n;i++){
		printf(" %d",sz[i]);}}
return 0;
}