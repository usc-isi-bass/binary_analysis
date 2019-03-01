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
	int a,b,i,t;
	scanf("%d%d",&a,&b);
	if(a==b)printf("%d",a);
	else {
		if(a<b){
			t=a;
			a=b;
			b=t;
		}
		while(a/2!=b){
			a=a/2;
			if(a/2<b){
				t=a;
				a=b;
				b=t;
		}
		}
	printf("%d",b);
	}
}