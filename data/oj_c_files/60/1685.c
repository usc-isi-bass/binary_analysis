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
	int i,j,n=0,l,t=0;
	scanf("%d",&l);
	for(i=3;i<=l-2;i++){
		for(j=2;j<i;j++){
			if(i%j==0){
				n=1;
				break;
			}
			else{
				if((i+2)%j==0){
					n=1;
					break;
				}
			}
        }
		if(n==0){
			printf("%d %d\n",i,i+2);
            t=1;
		}
		n=0;

		
	}
	if(t==0){
		printf("empty");
	}
}