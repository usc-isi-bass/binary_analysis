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
	int a[N],b[N],n,i,p,q;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d%d",&a[i],&b[i]);
	}
	p=0;
	q=0;
	for(i=0;i<n;i++){
		if(a[i]-b[i]==1||a[i]-b[i]==-2){
			q++;
		}else if(a[i]-b[i]!=0){
				p++;
		}
	}
	if(p>q){
		printf("A");
	}else if(q>p){
		printf("B");
	}else{
		printf("Tie");
	}
		return 0;
}

