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

int mark[300];
int main(){
	int n,i,sz[300];

	scanf("%d", &n);
	for(i = 0; i < n; i++){
	scanf("%d",&sz[i]);
	}

for(i=0;i<n;i++){
	for(int k=i+1;k<n;k++){
		if(sz[k]==sz[i]){
			mark[k]=1;
	}
	
	
	}
	
}
printf("%d",sz[0]);
for(i=1;i<n;i++){
	if(mark[i]==0){
		printf(",%d",sz[i]);
	}
}
return 0;
 }
