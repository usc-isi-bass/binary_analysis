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
    int n;
	scanf("%d", &n);
	if ((n%3==0)&&(n%5==0)&&(n%7==0)){
		printf("%d %d %d", 3, 5, 7);
	}
	else if((n%3==0)&&(n%5==0)&&(n%7!=0)){
        printf("%d %d", 3, 5);
	}
	else if((n%3!=0)&&(n%5==0)&&(n%7==0)){
        printf("%d %d", 5, 7);
	}
	else if((n%3==0)&&(n%5!=0)&&(n%7==0)){
        printf("%d %d", 3, 7);
	}
	else if((n%3==0)&&(n%5!=0)&&(n%7!=0)){
        printf("%d", 3);
	}
	else if((n%3!=0)&&(n%5==0)&&(n%7!=0)){
        printf("%d", 5);
	}
	else if((n%3!=0)&&(n%5!=0)&&(n%7==0)){
		printf("%d", 7);
	}
	else {
        printf("n");
	}
	return 0;
}