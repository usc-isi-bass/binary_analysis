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
	int n,i,j,max,min,p,q,s;
	s=0;
	scanf("%d",&n);
	int * a;
	int * b;
	int * c;
	a=(int*)malloc(sizeof(int)*n);
	b=(int*)malloc(sizeof(int)*n);
	for(i=0;i<n;i++){
		scanf("%d %d",&(a[i]),&b[i]);
	}
	max=b[0];min=a[0];
	for(i=1;i<n;i++){
		if(min>a[i]) min=a[i];
		if(max<b[i]) max=b[i];
	}
	q=max-min;
	c=(int*)malloc(sizeof(int)*q);
	for(i=0;i<q;i++){
		c[i]=1;
	}
	for(i=0;i<n;i++){
		for(j=a[i]-min;j<b[i]-min;j++){
			c[j]=0;
		}
	}
	for(i=0;i<q;i++){
		s+=c[i];
	}
	if(s>=1)
		printf("no");
	if(s==0)
		printf("%d %d",min,max);
	free(a);free(b);free(c);
	return 0;
}