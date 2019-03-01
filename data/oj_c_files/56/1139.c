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
	int a, b;
	scanf("%d", &a);
	if(a-0>=0&&a-10<0){
		b=a;
	}
	else if(a-10>=0&&a-100<0){
		b=a%10*10+a/10;
	}
	else if(a-100>=0&&a-1000<0){
		b=a%10*100+(a%100-a%10)+a/100;
	}
	else if(a-1000>=0&&a-10000<0){
		b=a%10*1000+(a%100-a%10)*10+(a%1000-a%100)/10+a/1000;
	}
	else if(a-10000>=0&&a-100000<0){
		b=a%10*10000+(a%100-a%10)*100+(a%1000-a%100)+(a%10000-a%1000)/100+a/10000;
	}	
	printf("%d", b);
	return 0;
}