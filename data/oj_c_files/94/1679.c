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
	int n,i,j,k,v,t;
	int a[500];
	int b[500];
	scanf("%d",&n);
    for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	j=0;
	for(i=0;i<n;i++){
		if(a[i]%2==1){
			b[j]=a[i];
			j=j+1;
		}
		else
			continue;
	}
	for(v=0;v<j;v++){
		for(k=v+1;k<j;k++){
			if(b[v]>b[k]){
				t=b[v];
				b[v]=b[k];
				b[k]=t;
			}
		}
	}
	for(v=0;v<j;v++){
		printf("%d",b[v]);
		if(v<j-1)
			printf(",");
	}
	return 0;
}