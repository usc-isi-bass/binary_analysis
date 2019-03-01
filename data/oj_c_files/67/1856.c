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
	int n,x;
	double z[100],y[100];
	scanf("%d",&n);
	for(x=0;x<n;x++){
		scanf("%lf%lf",&z[x],&y[x]);
	}
	for(x=1;x<n;x++){
		if(y[x]/z[x]>(y[0]/z[0]+0.05)){printf("better");}
		else if(y[x]/z[x]<(y[0]/z[0]-0.05)){printf("worse");}
		else{printf("same");}
		printf("\n");}
		
	return 0;
}