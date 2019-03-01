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
	int n,a;
	scanf("%d",&n);
	for(a=0;n>=100;a++){
		n-=100;
	}printf("%d\n",a);
	for(a=0;n>=50;a++){
		n-=50;
	}printf("%d\n",a);
	for(a=0;n>=20;a++){
		n-=20;
	}printf("%d\n",a);
	for(a=0;n>=10;a++){
		n-=10;
	}printf("%d\n",a);
	for(a=0;n>=5;a++){
		n-=5;
	}printf("%d\n",a);
	for(a=0;n>=1;a++){
		n-=1;
	}printf("%d\n",a);
	return 0;
}

