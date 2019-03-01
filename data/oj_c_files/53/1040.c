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

	int n,i,m;
	int sz[300];

	scanf("%d",&n);

	for(i=0;i<n;i++){

		scanf("%d",&sz[i]);
	    
		if(i==0){

			printf("%d",sz[i]);
		}else{
            m=0;
			for(int k=0;k<i;k++){
				if(sz[i]==sz[k]){
					m=1;
				}
			}
			if(m==0){
				printf(",%d",sz[i]);
			}
		}
	}

	return 0;
}

