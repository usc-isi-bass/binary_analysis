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
	int a,b,c,d,e,f;
	int i=1;
	scanf("%d",&a);
	scanf("%d%d",&b,&c);
	d=(b>=c)?b:c;
	e=(b<=c)?b:c;
	for(i=3;i<=a;i++){
		scanf("%d",&f);
		if(d<=f){
			e=d;
			d=f;
		}
		else{
			e=(e>=f)?e:f;
		}
	}
	printf("%d\n%d",d,e);
	return 0;
}