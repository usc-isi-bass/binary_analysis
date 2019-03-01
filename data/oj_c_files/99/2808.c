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
	int n,sz[100],i;
	double	a=0,b=0,c=0,d=0;
	scanf("%d",&n);
	for(i=0;i<n-1;i++){
		scanf("%d ",&sz[i]);
	}
	scanf("%d",&sz[n-1]);
    for(i=0;i<n;i++){
		if(sz[i]<=18){
			a=a+1;
		}
                  if((18<sz[i])&&(sz[i]<=35)){
			b=b+1;
		}
                 if((35<sz[i])&&(sz[i]<=60)){
			c=c+1;
		}
                  if(sz[i]>60){
			d=d+1;
		}
	}
    printf("1-18: %.2lf%%\n",a/n*100);
	printf("19-35: %.2lf%%\n",b/n*100);
	printf("36-60: %.2lf%%\n",c/n*100);
	printf("60??: %.2lf%%\n",d/n*100);
	return 0;
}