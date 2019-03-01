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
	int n,i,j,e;
	int sz[100];
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&sz[i]);}
	
		for(j=0;j<(n/2);j++){
                       e=sz[j];
	              sz[j]=sz[n-j-1];
		     sz[n-j-1]=e;}
                   for(j=0;j<n;j++){if(j==0){
                           printf("%d",sz[j]);}
                   else{
	                  printf(" %d", sz[j]);}}
return 0;
}