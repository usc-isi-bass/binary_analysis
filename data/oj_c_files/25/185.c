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
	int n,i,j,sz[100];
	scanf("%d",&n);
	for(i=0;i<99;i++){
		sz[i]=0;
	}
	sz[99]=1;
	for(j=1;j<=n;j++){
		for(i=0;i<100;i++){
			sz[i]=sz[i]*2;
		}
		for(i=0;i<100;i++){
		    if(sz[i]>=10){
				sz[i]=sz[i]-10;
			    sz[i-1]=sz[i-1]+1;			
			}
		}
	}
	
	for(i=0;i<100;i++){
		if(sz[i]!=0){
			for(j=i;j<100;j++){
				printf("%d",sz[j]);
			}
			break;
		}
	}
	return 0;
}