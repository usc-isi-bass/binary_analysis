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
	int n,i,j,s=2,count=0;
	scanf("%d",&n);
	for(i=3;i<=n;i++){
		for(j=2;j<i;j++){
			if(i%j==0){
				break;	
			}
		}	
		if(j==i){
			count++;
			if((i-s)==2){
				printf("%d %d\n",s,i);	
			}	
			s=i;
		}
	}	
	if((count==0)||n==3||n==4){
		printf("empty");	
	}
	return 0;
}