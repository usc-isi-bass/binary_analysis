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
	int sz[3]={3,5,7};
	int n;
	scanf("%d",&n);
	int i;
	int flag=0;
	int isfirsttime=1;

	for(i=0;i<3;i++){
			if(n%sz[i]==0){
				if(!isfirsttime){
				printf(" %d",sz[i]);
				flag=1;
				}else{
					printf("%d",sz[i]);
					flag=1;
					isfirsttime=0;

				}

			}
	


	}
	if(flag==0){
		printf("n");
	}
	return 0;
}
