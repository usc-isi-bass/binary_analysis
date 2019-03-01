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
	int a,i;
	scanf("%d",&a);
	i=0;
    if ((a%3==0)&&(a%5==0)&&(a%7==0)) {printf("3 5 7\n");i=1;}
	else if (a%3==0&&a%5==0) {printf("3 5\n");i=1;}
	else if (a%3==0&&a%7==0) {printf("3 7\n");i=1;}
	else if (a%5==0&&a%7==0) {printf("5 7\n");i=1;}
	else if (a%3==0) {printf("3\n");i=1;}
	else if (a%5==0) {printf("5\n");i=1;}
	else if (a%7==0) {printf("7\n");i=1;}
	if (i==0) printf("n\n");
    return 0;
}