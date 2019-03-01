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
	int n,i,j;
	int sz[200][2];
	int jg[100];
	scanf("%d",&n);
	for(i=0;i<n;i++){
		for(j=0;j<2;j++){
			scanf("%d",&sz[i][j]);
		}
		jg[i]=sz[i][1]*100/sz[i][0];
	}
	for(i=1;i<n;i++){
		if(jg[i]-jg[0]>=5) printf("better\n");
        else{
			if(jg[0]-jg[i]>=5) printf("worse\n");
			else printf("same\n");
		}
	}
	return 0;
}