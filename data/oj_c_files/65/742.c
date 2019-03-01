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
	int sz[200],sc[200],n,i,a=0,b=0;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d %d",&sz[i],&sc[i]);
	}
	for(i=0;i<n;i++){
		if(sz[i]==sc[i]-1||sz[i]==sc[i]+2){
			a++;}
		if(sc[i]==sz[i]-1||sc[i]==sz[i]+2){
			b++;}
	}
	if(a>b){
		printf("A");}
	if(a<b){
		printf("B");}
	if(a==b){
		printf("Tie");}
	return 0;
}
