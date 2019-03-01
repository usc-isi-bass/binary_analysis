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
	int a[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
	int w,i,i2,day,x;
	scanf("%d",&w);
	for(i=1;i<=12;i++){
		day=0;
		for(i2=0;i2<i;i2++){
			day=day+a[i2];
		}
		x=(day+12+w)%7;
		if(x==5)
			printf("%d\n",i);
	}
}
