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
	int n,x,y,c,b,sum=0,i,a[10][10];
	scanf("%d",&n);
    for(x=0;x<n;x++){
		for(y=0;y<n;y++){
			scanf("%d",&a[x][y]);
		}
	}
	for(x=0;x<n;x++){
		for(y=0;y<n;y++){
			if(a[x][y]==0){
				b=y;
				break;
			}
		}
	}
    for(x=0;x<n;x++){
		for(y=0;y<n;y++){
			if(a[x][y]==0){
				c=y;
				sum++;
			}
		}
	}
    i=(sum-2*(c-b-1))/2*(c-b+1)-sum;
	printf("%d",i);
	return 0;
}