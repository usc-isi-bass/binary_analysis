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
	int n,m=0,a=0;
	scanf("%d",&n);
	while(n!=a){
		a=n%10;
		if(a==n)
			break;
		else{
			m=m*10+a*10;
		}
		n=n/10;
	}
	m=m+a;
	printf("%d",m);
	return 0;
}
