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
	int n,a,b,i;
	double q,e;
	scanf("%d\n",&n);
    scanf("%d %d\n",&a,&b);
	q=(double)b/(double)a;
	for(i=2;i<=n;i++){
		scanf("%d %d\n",&a,&b);
        e=(double)b/(double)a;
    if(e-q>0.05) printf("better\n");
	if(q-e>0.05) printf("worse\n");
	if((e-q)*(e-q)<=0.0025) printf("same\n");
	}
	return 0;
}

