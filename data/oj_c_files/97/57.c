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
	int money;scanf("%d", &money);
	int m1=0, m2=0, m3=0, m4=0, m5=0, m6=0;
	m1=money/100;
	if(money%100 != 0){
		m2=(money%100)/50;
	}
	if(money%100%50 != 0){
	m3=money%100%50/20;
	}
	if(money%100%50%20 != 0){
		m4=money%100%50%20/10;
	}
	if(money%100%50%20%10 != 0){
		m5=money%100%50%20%10/5;
	}
	if(money%100%50%20%10%5 != 0){
		m6=money%100%50%20%10%5;
	}
	printf("%d\n", m1);
	printf("%d\n", m2);
	printf("%d\n", m3);
	printf("%d\n", m4);
	printf("%d\n", m5);
	printf("%d\n", m6);
	return 0;
}