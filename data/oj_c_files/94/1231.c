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
	int i,n,z=0,k,h=0;
	int sz[500];
	int mm[500];
	int xx[500];
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&sz[i]);
	}
    for(i=0;i<n;i++){
		if(sz[i]%2==1){
			mm[z]=sz[i];
			z++;
		}
	}
	for(k=0;k<10000;k++){
		for(i=0;i<z;i++){
			if(k==mm[i]){
				xx[h]=k;
				h++;
				break;
			}
		}
	}
	for(i=0;i<(h-1);i++){
		printf("%d,",xx[i]);
	}
	printf("%d",xx[h-1]);
	return 0;
}

			
