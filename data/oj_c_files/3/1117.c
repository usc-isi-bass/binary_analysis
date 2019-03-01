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
	int n,k,i,p;
	scanf("%d %d",&n,&k);
	int m=1;
	int sz[1000];
	for(i=0;i<n;i++){
		scanf("%d",&sz[i]);}
	
	for(i=0;i<n&&m==1;i++){
		for(p=i+1;p<n&&m==1;p++){
			if(sz[i]+sz[p]==k) 
			{
				printf("yes");
				m=0;
		}
	}
	}
	if(m==1)
		printf("no");
	return 0;
}
