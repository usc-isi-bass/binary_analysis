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
	int a, b=-1,c=-2;
	scanf("%d",&a);
	int d;
	for(int i=0;i<a;i++){
		scanf("%d",&d);
		if(d>b){
			c = b;
			b = d;
		}
		else if(d<b && d>c){
			c = d;
		}
	}
    printf("%d\n%d",b,c);
	return 0;
}