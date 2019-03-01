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
	int sz[1000],n,i,k,d,e;
	scanf("%d %d",&n,&e);
	for(i=0;i<n;i++){
		scanf("%d",&sz[i]);
	}
    for(k=0;k<n-1;k++){
		if(k==n-2){
			  printf("no");
			  break;}
       for(i=k+1;i<n;i++){
		   d=sz[k]+sz[i];
		   if(d==e){
		printf("yes");
		break;}
	   }
		   if(d==e){
		break;} 
	   }
		  return 0;
		  }
	   