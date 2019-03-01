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
	int a, b, c, d, e, f;
	int flag=0;
	int one, two, s;
	while(flag==0){
		scanf("%d %d %d %d %d %d", &a, &b, &c, &d, &e, &f);
		if(a!=0){
			d+=12;
			one=a*3600+b*60+c;
			two=d*3600+e*60+f;
			s=two-one;
			printf("%d\n", s);
		}
		if(a==0){
			flag=1;
		}
	}
	return 0;
}