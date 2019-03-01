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
	int n, x, i;
	int sz[5];
	scanf("%d", &n);
	x=n;
	for(i=1;i<=5;i++){
        sz[i]=x%10;
		x/=10;		
		printf("%d", sz[i]);
		if (x==0)
			break;
	}
	return 0;
}