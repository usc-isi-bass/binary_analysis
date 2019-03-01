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
    int n,i,k,shuzu[1000],j,x=0;
    scanf("%d%d",&n,&k);
    for(i=0;i<n;i++){
		scanf("%d",&shuzu[i]);
	}
	for(i=0;i<n;i++){
		for(j=i+1;j<n;j++){ 
			if(shuzu[i]+shuzu[j]==k) {
				printf("yes");
				j=n+1;
				i=n+1;
			}
			else{
				x++;
			}
		}
	}
	if(x==((n-1)*n/2)){
		printf("no");
	}
    return 0;
}