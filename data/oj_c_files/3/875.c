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

int main ()
{
	int n,k,i,j,p=1;
	int sz[1000];
	scanf("%d %d\n",&n,&k);
	scanf("%d",&sz[0]);
	for(i=1;i<n;i++){
		scanf(" %d",&sz[i]);
	}
	for(i=0;i<n;i++){
		for(j=i;j<n;j++){
			if(sz[i]+sz[j]==k){
				printf("yes");
				return 0;
			}
		}
	}
	printf("no");
	return 0;
}
			
