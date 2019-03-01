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
	scanf("%d",&n);
	int sum=0,j=1;
	for(j=1;j<=n;j++){
		if(j%7==0){
			continue;
		}
		if(j%10==7 || (int)j/10==7){
			continue;
		}
		sum+=j*j;
	}
	printf("%d",sum);
	return 0;
}