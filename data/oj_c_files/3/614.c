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
int i,n,k;
scanf("%d %d",&n,&k);
int sz[1000];
for(i=0;i<n;i++){
	scanf("%d",&sz[i]);
}
int j;
for(i=0;i<n;i++){
	
	for(j=0;j<n;j++){
		if((sz[i]+sz[j])==k){
		printf("yes");

	break;
	}

	
}

		if((sz[i]+sz[j])==k){
		break;}

	}

int a=i,b=j;
if((a==n)&&(b==n)&&(sz[n-1]+sz[n-1]!=k)){
printf("no");
}	


	return 0;
}
