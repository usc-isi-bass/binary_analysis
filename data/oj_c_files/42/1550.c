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
	int n,sz[100000],k;
	int i,t=0,s=0;
	scanf("%d",&n);
	for(i=0;i<n;i++){
        scanf("%d ",&sz[i]);
	}
	scanf("%d",&k);
		for(i=0;i<n;i++){
		if(sz[i]!=k){
		
        s++;
		}
	}
	for(i=0;i<n;i++){
		if(sz[i]!=k&&t!=s-1){
			printf("%d ",sz[i]);
			t++;
		}else if(sz[i]!=k&&t==s-1){
			printf("%d",sz[i]);
		}
	}
	return 0;
}


