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
	int n,i,a,b,sz[100];
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d %d",&a,&b);
        if(a>=90&&a<=140&&b<=90&&b>=60){
			sz[i]=1;
		}else{
			sz[i]=0;
		}
	}
	int k,c,d=0,m=0;
	for(k=m;k<n;k++){
		c=0;
		if(sz[k]==1){
			for(i=k;i<n;i++){
                if(sz[i]==1){
					c++;
				}else{
					m=i;
					break;
				}
			}
		}
		if(c>d){
			d=c;
		}
	}
	printf("%d",d);
	return 0;
}