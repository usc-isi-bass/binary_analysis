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


int main(int argc, char* argv[])
{
	int a[1000],n,k,i,j,x;
	scanf("%d %d",&n,&k);
	for(i=0;i<n;i++){
		scanf("%d ",&a[i]);
	}
	for(i=0;i<n;i++){
		for(j=i+1;j<n;j++){
			if(a[i]+a[j]==k){
				x++;
			}
		}
	}
	if(x!=0){
		printf("yes");
	}
	else{
		printf("no");
	}
	return 0;
}
