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
	int t=0;
	scanf("%d",&n);
	if (n % 3==0){
		printf("%d",3);
		t++;
	}
    if (n % 5==0){
		if (t){
			printf(" ");
		}
		printf("5");
		t++;
	}
	if (n % 7==0){
        if (t){
			printf(" ");
		}
		printf("%d",7);
		t++;
	}
	if (t==0){
		printf("n");
	}
	printf("\n");

	return 0;
}
