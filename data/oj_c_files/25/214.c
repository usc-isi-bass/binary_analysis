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
	int n,i;
	double s;
	scanf("%d",&n);
	if(n==0){
		s=1;
		printf("%.0lf",s);
	}
	if(n==1){
		s=2;
			printf("%.0lf",s);
	
	}
	if(n>=2){
		s=1;
		i=1;
		while(i<=n){
			s=2*s;
			i++;
		}
		printf("%.0lf",s);
	}
	
	return 0;
}
