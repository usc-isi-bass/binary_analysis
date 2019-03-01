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
	int n,i,j,a[MAX],b[MAX],x,y,k=0,l=0,z=0;
	int t[MAX]={0};
	int sum=0,e=0;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d%d",&a[i],&b[i]);
		if(b[i]>k){
			k=b[i];
		}
		l=a[0];
		if(a[i]<l){
			l=a[i];
		}
		for(j=2*a[i];j<2*b[i]+1;j++){
			t[j]=1;
		}
	}
	for(i=0;i<MAX;i++){
		if(t[i]==1){
			sum++;
			if(t[i+1]==0){
				if(sum>e){
					e=sum;
					x=(i-e+1)/2;
					y=i/2;
					sum=0;
				}
			}
		}
	}
	for(i=2*l;i<2*k+1;i++){
		if(t[i]==0){
			printf("no");
			z=1;
			break;
		}
	}
	if(z==0){
		printf("%d %d\n",x,y);
	}

	return 0;
}