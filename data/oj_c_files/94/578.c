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
	int n,num[500],l,i;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&num[i]);
	}
	int t=0,m[500];
	for(i=0;i<n;i++){
		if(num[i]%2!=0){
			m[t]=num[i];
			t++;
		}
	}
	for(i=0;i<t;i++){
		for(l=t;l>i;l--){
			if(m[l]<m[l-1]){
				int k=m[l];
				m[l]=m[l-1];
				m[l-1]=k;
			}
		}
	}
	for(i=1;i<t;i++){
		printf("%d,",m[i]);
	}
	for(i=t;i<t+1;i++){
		printf("%d\n",m[i]);
	}
	return 0;
}
