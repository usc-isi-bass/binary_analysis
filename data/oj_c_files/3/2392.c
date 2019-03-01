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
	int n,k,t,j,sz[1000];
	scanf("%d %d",&n,&k);
	for(int i=0;i<n;i++){
		scanf("%d",&sz[i]);
	}
	for(t=0;t<n-1;t++){
		for(j=t+1;j<n;j++){
			if(sz[t]+sz[j]==k){
				printf("yes");
				break;
			}
		}
		if(j<n)
			break;
	}
	if(t==n-1){
		printf("no");
	}
	return 0;
}
		