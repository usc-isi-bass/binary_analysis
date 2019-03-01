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
	int n;
	double m;
	scanf("%d",&n);
	if(n==0){
		printf("1");
	}
	else{
		m=pow(2,n);
		printf("%.lf",m);
	}
	return 0;
}