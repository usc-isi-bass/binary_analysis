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

int main(int argc, char* argv[])
{
	int mth[12]={31,28,31,30,31,30,31,31,30,31,30,31};
	int n,i,j,sum=0;
	scanf("%d",&n);
	for (i=1;i<=12;i++) {
		for(j=0;j<i-1;j++) {
			sum=sum+mth[j];
		}
		if ((sum+13+n-1)%7==5) {
			printf("%d\n",i);
		}
		sum=0;
	}
	return 0;
}

