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
	int n,m;
	int i,j,a,b,sum;
	int sz[300];
	for(i=0;;i++){
		scanf("%d %d",&n,&m);
		if(n==0 && m==0){
			break;
		}else{
			sum=0;
			for(j=0;j<n;j++){
				sz[j]=j+1;
			}
			for(a=0,b=1;sum!=n-1;){
				if(b==m){
					sz[a]=0;
					sum++;
					b=0;
				}
				if(a!=n-1){
					a++;
				}else{
					a=0;
				}
				if(b!=m && sz[a]!=0){
					b++;
				}
			}
			for(a=0;a<n;a++){
				if(sz[a]!=0){
					printf("%d\n",sz[a]);
				}
			}
		}
	}
	return 0;
}
