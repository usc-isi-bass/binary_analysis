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
	int i,n,a,b;
	scanf("%d",&n);
	double*s=(double*)malloc(sizeof(double)*n);
	for(i=0;i<n;i++){
		scanf("%d %d",&a,&b);
		s[i]=1.0*b/a;
	}
	for(i=1;i<n;i++){
		if(s[i]-s[0]>0.05) printf("better\n");
		else if(s[0]-s[i]>0.05) printf("worse\n");
		else printf("same\n");
	}
	return 0;
}