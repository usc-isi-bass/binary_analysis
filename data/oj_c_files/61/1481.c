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
	int n,i,c;
	int a[1000];
	int b[1000];
	int g[1000];
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	b[0]=1;
	b[1]=1;
	for(i=2;i<1000;i++){
		b[i]=b[i-1]+b[i-2];
	}
	for(i=0;i<n;i++){
		c=a[i]-1;
		g[i]=b[c];
	}
	for(i=0;i<n;i++){
		printf("%d\n",g[i]);
	}
	return 0;
}