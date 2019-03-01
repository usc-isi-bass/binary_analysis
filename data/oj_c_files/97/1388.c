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
	int n,a,b,c,d,e,f,i;
    int sz[6]={100,50,20,10,5,1};
	scanf("%d",&n);
	for(i=0;i<6;i++){
		printf("%d\n",n/sz[i]);
		n=n%sz[i];
	}

	return 0;
}
