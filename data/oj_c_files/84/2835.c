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


int main(int argc, char* argv[]){
	int n, i=1, max=0, max2=0, a;
	scanf("%d", &n);
	for (i=1; i<=n; i++){
		scanf("%d", &a);
		if (a>=max){
			max2=max;
			max=a;
			continue;
		}
		else if((a<max)&&(a>=max2)){
			max2=a;
			continue;
		}
		else continue;
	}
	printf("%d\n%d\n",max,max2);
	return 0;
}