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
	int n,i,count=0;
	int len[10000];
	char sz[10000][21]={'\0'};
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%s",sz[i]);
	}
	for(i=0;i<n;i++){
		len[i]=strlen(sz[i]);
	}
	for(i=0;i<n-1;i++){
		count=count+len[i]+1;
		if(count>81){
			printf("\n");
			count=0;
			continue;
		}
		else if((count-1<=80)&&(count+len[i+1]>80)){
			printf("%s\n",sz[i]);
			count=0;
			continue;
		}
		else if((count<=80)&&(count+len[i+1]<=80)){
			printf("%s ",sz[i]);
			continue;
		}
	}
	printf("%s",sz[n-1]);
	return 0;
}
	
