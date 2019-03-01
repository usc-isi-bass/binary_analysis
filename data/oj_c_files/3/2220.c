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
	int n,k,m,e=0,sz[1000];
	scanf("%d %d\n",&n,&k);
	for(int i=0;i<n-1;i++){
		scanf("%d ",&(sz[i]));
	}
    scanf("%d",&(sz[n-1]));
	for(int j=0;j<n;j++){
		m=sz[j];
		sz[j]=sz[0];
		sz[0]=m;
		for(int p=1;p<n;p++){
			if(sz[j]+sz[p]==k){
				e=1;
			}
		}
	}
	if(e==0){
		printf("no");
	}
	else if(e==1){
		printf("yes");
	}
return 0;
}
