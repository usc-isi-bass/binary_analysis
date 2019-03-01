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

void maopao(int a[],int n)
{
	int i,k,t;
	for(k=n-1;k>0;k--){
		for(i=0;i<k;i++){
			if(a[i]>a[i+1]){
				t=a[i];
				a[i]=a[i+1];
				a[i+1]=t;
			}
		}
	}
}
int main(){
	int a[MAX],b[MAX];
	int i,n,c,m,x;
	x=0;
	scanf("%d",&n);
	
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++){
		if(a[i]%2!=0){
			b[x]=a[i];
			x=x+1;

		}
	}
	c=0;
    maopao(b,x);
    for(c=0;c<x-1;c++){
          printf("%d,",b[c]);
	}
	printf("%d",b[x-1]);
	return 0;
}