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

int print(int n);
int main()
{int n;
scanf("%d",&n);
print(n);
return 0;
}
int print(int n){
	int s,a,b;
	a=n;
	s=0;
	if(a==0)
		printf("0");
	else {
	while(a>0){
		b=a%10;
		printf("%d",b);
		a=a/10;
	}
	}
return 0;
}
