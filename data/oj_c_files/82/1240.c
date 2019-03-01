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

int main() {
	int n,a,b,c=0,i=0,j=0,m=0;
	int sz[72];
	scanf("%d",&n);
	while(i<n){
		scanf("%d%d",&a,&b);
		if(a<=140&&a>=90&&b<=90&&b>=60){
			j+=1;
		}else{
			sz[m]=j;
			j=0;
			if(c<sz[m]){
				c=sz[m];
			}
			m+=1;
		}
		i+=1;
	}
	if(c<j){
		c=j;
	}
	printf("%d",c);
	return 0;
}
