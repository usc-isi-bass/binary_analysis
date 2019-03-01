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
	int n,m;
	scanf("%d",&n);
	m=n/100;
	printf("%d\n",m);
	m=(n%100)/50;
	printf("%d\n",m);
	m=((n%100)%50)/20;
	printf("%d\n",m);
	m=(((n%100)%50)%20)/10;
	printf("%d\n",m);
	m=((((n%100)%50)%20)%10)/5;
	printf("%d\n",m);
	m=(((((n%100)%50)%20)%10)%5)/1;
	printf("%d\n",m);
	return 0;
}

