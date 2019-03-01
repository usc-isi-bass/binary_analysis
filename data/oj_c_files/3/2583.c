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
    int i,j,n,k;
    scanf("%d%d",&n,&k);
    int num[1500],sz[1500];
    for(i=0;i<n;i++){
		scanf("%d",&(num[i]));
		sz[i]=num[i];
    }
    for(i=0;i<n;i++){
		for(j=i;j<n;j++){
			if(num[i]+sz[j]==k){
				printf("yes");
				break;
			}
				if((i==n-1)&&(j==n-1)){
					printf("no");
				}
			
		}
		if(num[i]+sz[j]==k){
				break;
			}
    }
    return 0;
}  