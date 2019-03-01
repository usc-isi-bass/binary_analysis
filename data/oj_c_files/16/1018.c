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

int main()
{
	int a[10],n,flag;
	flag = 0;
	scanf("%d",&n);
	if(n == 0) printf("0");
	else{
		while(n != 0){
			flag ++;
			a[flag] = n % 10;
			n = n / 10;
		}
		for(int i = 1;i <= flag;i ++){
			printf("%d",a[i]);
		}
	}
	return 0;
}