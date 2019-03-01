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
	for(int g=0; g<100; g++){
                scanf("%d %d %d %d %d %d", &a,&b,&c,&d,&e,&f);
		if(a==0){break;}
		else{
			
			int h=60*b+c;
			int i=60*e+f;
			int j=(12+d-a)*3600;
			int k=j+i-h;
			printf("%d\n", k);
		}
	}
	return 0;
}