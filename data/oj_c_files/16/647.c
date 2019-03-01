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
	int a,b,c,d,e;
	scanf("%d",&a);
	b=a%10;
	c=(a%100-b)/10;
	d=(a%1000-b-c*10)/100;
	e=a/1000;
	if(e==0){
		if(d==0){
			if(c==0){
				printf("%d",b);
			}
			else {
				printf("%d%d",b,c);
			}
		}
		else{
			printf("%d%d%d",b,c,d);
		}
	}
	else {
		printf("%d%d%d%d",b,c,d,e);
	}
	return 0;
}