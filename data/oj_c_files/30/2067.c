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
	int n,sum=0;
	scanf("%d",&n);
	while(n>0){
		if(n%7!=0&&n%10!=7&&(n>79||n<70))
			sum+=pow(n,2);
		n--;
	}
	printf("%d\n",sum);
	return 0;
}