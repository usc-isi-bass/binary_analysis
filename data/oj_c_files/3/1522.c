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
	int i,m=0,k,n,sz[1000],s[1000];
	scanf("%d %d",&n,&k);
	for(i=0;i<n;i++){
		scanf("%d",&sz[i]);
		s[m]=sz[i];
	    m++;}
    for(i=0;i<n;i++){
		if(i==n-1){
			break;}
		for(m=n-1;m>=i+1;m--){
			if(s[m]+sz[i]==k){
			printf("yes");
			break;
			}
		}
            if(s[m]+sz[i]==k){
				break;}
	}
	    if(i==n-1){
	    	printf("no");
		}
	return 0;
}

