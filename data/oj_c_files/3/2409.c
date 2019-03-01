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
	int n,k;
	scanf("%d%d",&n,&k);
	int sz[1000];
	for(int i=0;i<n;i++){
		scanf("%d",&sz[i]);
	}
	int p,m;
	for(m=0;m<n-1;m++){
		for(p=m+1;p<n;p++){
			if(k==sz[m]+sz[p])
			break;
		}
		if(p==n)
			continue;
		else if(p<n&&k==sz[m]+sz[p]){
			printf("yes");
			break;
		}
	}
	if(m==n-1)
		printf("no");
	return 0;
}