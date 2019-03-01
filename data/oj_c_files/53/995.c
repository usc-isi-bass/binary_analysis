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
	int n,sz[300],i,k;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&sz[i]);
	}
	for(i=0;i<n;i++){
		for(k=0;k<n;k++){
			if (sz[i]==sz[k]&&i!=k&&sz[k]!=100000000){
				sz[k]=100000000;
			}
		}
	}
	printf("%d",sz[0]);		
	for(i=1;i<n;i++){
				if(sz[i]==100000000){
					continue;
				}
				
				printf(",%d",sz[i]);
			}
			
			return 0;
	}
