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
	char zfc[300];
	int sz[26];
	int i,m,k,t;
	char n;
	t=0;
	scanf("%s",zfc);
	m=strlen(zfc);
	for(k=0;k<26;k++){
		sz[k]=0;
	}
	for((n=97,k=0);(n<123&&k<26);(n++,k++)){
		for(i=0;i<m;i++){
			if(zfc[i]==n){
				sz[k]++;
			}
		}
		if(sz[k]>0){
			printf("%c=%d\n",n,sz[k]);
			t++;
		}
	}
	if(t==0){
		printf("No");
	}
	return 0;
}

