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
	int n,x,y,i,a=0,b=0;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d%d",&x,&y);
		if((x==0&&y==1)||(x==2&&y==0)||(x==1&&y==2)){
			a++;}
		if((x==1&&y==0)||(x==0&&y==2)||(x==2&&y==1)){
			b++;}}
	if(a==b){printf("Tie");}
	if(a>b){printf("A");}
	if(a<b){printf("B");}




	
     return 0;}