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
	int n;
	scanf("%d",&n);
	int a=0,b=0,c=0,d=0,e=0,f=0;
	while(1){
		if(n-100*a>=100){
			a++;
		}else if(n-100*a-50*b>=50){
			b++;
		}else if(n-100*a-50*b-20*c>=20){
			c++;
		}else if(n-100*a-50*b-20*c-10*d>=10){
			d++;
		}else if(n-100*a-50*b-20*c-10*d-5*e>=5){
			e++;
		}else
		break;
			f=n-100*a-50*b-20*c-10*d-5*e;
	}
			printf("%d\n%d\n%d\n%d\n%d\n%d\n",a,b,c,d,e,f);
			return 0;
	}