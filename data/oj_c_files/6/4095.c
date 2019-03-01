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
	int n,x[100],y[100],sz[100][100],i,j,k;
	int m[100]={0},p=0;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d%d",&x[i],&y[i]);
		for(j=0;j<x[i];j++){
			for(k=0;k<y[i];k++){
				scanf("%d",&sz[j][k]);
				if(j==x[i]-1||j==0||k==y[i]-1||k==0){
					m[p]+=sz[j][k];
				}
			}
		}
		p++;
	}
	for(i=0;i<p;i++){
	    printf("%d\n",m[i]);
	}
	return 0;
}