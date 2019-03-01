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
	int n,i,k,r,sz[100000];
	scanf("%d",&n);
    for(i=0;i<n;i++){
		scanf("%d",&sz[i]);
		}
	scanf("%d",&k);
	for(i=0;i<n;i++){
		if(sz[i]==k){
			
			for(r=i;r<n;r++){
				sz[r]=sz[r+1];
				}
			i--;
			n--;
			}
		}
	
		
		
	for(i=0;i<n;i++){
		if(i==n-1){
			printf("%d",sz[i]);
			}
		else
		printf("%d ",sz[i]);
		}
	
	return 0;
	
	}
