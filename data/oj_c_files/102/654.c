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

int main()
{
	int n,i,r=0,t=0,k;
	char s[41][8];
	double d[41],b[41],g[41],e;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%s" "%lf",s[i],&d[i]);
	}
	for(i=0;i<n;i++){
		if(s[i][0]=='m'){
			b[r]=d[i];
			r++;
		}else if(s[i][0]=='f'){
			g[t]=d[i];
			t++;
		}
	}
	for(k=1;k<=r;k++){
		for(i=0;i<r-k;i++){
			if(b[i]>b[i+1]){
				e=b[i];
				b[i]=b[i+1];
				b[i+1]=e;
			}
		}
	}
	for(k=1;k<=t;k++){
		for(i=0;i<t-k;i++){
			if(g[i]<g[i+1]){
				e=g[i];
				g[i]=g[i+1];
				g[i+1]=e;
			}
		}
	}
	printf("%.2lf",b[0]);
	for(i=1;i<r;i++){
		printf(" %.2lf",b[i]);
	}
	for(i=0;i<t;i++){
		printf(" %.2lf",g[i]);
	}
	return 0;
}
