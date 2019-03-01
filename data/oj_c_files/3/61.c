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

void main(){
	int n,i,k,m[1000],s=0,j;
	scanf("%d%d",&n,&k);
	for(i=0;i<n;i++){
		scanf("%d",&m[i]);
		for(j=i-1;j>=0;j--){
			if(m[i]+m[j]==k)
				s++;
		}
	}
	if(s>0)
		printf("yes");
	else
		printf("no");
}	
