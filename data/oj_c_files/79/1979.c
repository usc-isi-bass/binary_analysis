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
	int m,n,i,j,h,c,l,k,p,a=0;
	int sz[300],ph[300];
	for(i=0;m!=0;i++){
		scanf("%d %d",&n,&m);
		for(j=0;j<n;j++){
			sz[j]=j+1;
		}
		l=n;
		for(j=0;j<(n-1);j++,l--){
			for(h=0;h<m;h++){
				p=sz[l-1];
				for(c=(l-2);c>=0;c--){
					k=sz[c];
					sz[c]=p;
					p=k;
				}
				sz[l-1]=p;
			}
		}
		ph[a]=sz[0];
		a++;
	}
	for(i=0;i<a-1;i++){
	printf("%d\n",ph[i]);
	}
	return 0;
}
