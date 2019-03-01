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

int main()
{
	int n, sz[1000], k, j, i, m;
	scanf("%d %d", &n, &k);
	for(i=0;i<n;i++){
		if(i==0){
			scanf("%d", &sz[i]);
		}else{
		scanf(" %d", &sz[i]);
		}
	}
	for(i=0;i<n;i++){
		for(j=i+1;j<n;j++){
			if(sz[i]+sz[j]==k){
				printf("yes");
				m=1;
				break;
			}
		}if(m==1){
		break;
		}
	}if(m!=1){
	printf("no");
	}
     return 0;
}