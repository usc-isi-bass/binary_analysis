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
	int n,i,c=0,p=0,q=0;
	int a[200],b[200];
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d %d",&a[i],&b[i]);
	}
	for(i=0;i<n;i++){
		if(a[i]==0){
			if(b[i]==1){
			p++;
			}
			if(b[i]==2){
			q++;
			}
		}
		if(a[i]==1){
			if(b[i]==0){
			q++;
			}
			if(b[i]==2){
				p++;
			}
		}
		if(a[i]==2){
			if(b[i]==0){
				p++;
			}
            if(b[i]==1){
				q++;
			}
		}
		if(a[i]==b[i])
			c++;
	}
	if(c==n||p==q)
		printf("Tie");
	if(p>q)
		printf("A");
	if(p<q)
		printf("B");
	return 0;
}