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
 	int n,i,j,m=0,num=0;
 	int sz[10000];
 	scanf("%d",&n);
 	for(i=2;i<=n;i++){
			for(j=2;j<=i;j++){
				if(i%j==0) break;
				}
			if(j==i){
				sz[m]=i;
				m++;
				}
			}
	if(m<2) printf("empty");
	else{
		for(i=1;i<m;i++){
		if(sz[i]-sz[i-1]==2){
			printf("%d %d\n",sz[i-1],sz[i]);
			num++;
			}
		}
	if(num==0) printf("empty");
	}
	
 	
    return 0;
}