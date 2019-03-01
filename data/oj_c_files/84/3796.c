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

int main () {
	int a,n,i=0,b,max,secm=0;
	scanf("%d",&n);
	scanf("%d",&max);
	for (; i<n-1; i++) {
		scanf("%d",&b);
		if (max<b) {
			a=max;
			max=b;
			secm=a;
		}
		else if(b>secm){
			secm=b;
		}

	}
	printf("%d\n\n%d",max,secm);
	return 0;
}