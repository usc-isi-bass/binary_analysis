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
	int num,i;
	int reverse(int num);
	for(i=1;i<=6;i++){
		scanf("%d",&num);
		printf("%d\n",reverse(num));
	}
	return 0;
}
int reverse(int num)
{
	int t=0,i,zf=1;
	if(num<0){
		num=-num;
		zf=-1;
	}
	for(i=1;;i++){
		t=t*10+num%10;
		if(num<10)break;
		num=num/10;
	}
	t=t*zf;
	return(t);
}