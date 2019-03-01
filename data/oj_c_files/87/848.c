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
    int a,b,c,d,e,f,dh,dm,ds;
	scanf("%d %d %d %d %d %d",&a,&b,&c,&d,&e,&f);
	while(a!=0){
		dh=12-a+d;
		if(b<e){
			dm=60*dh+e-b;
		}
		else{
			dm=60*dh-(b-e);
		}
		if(c<f){
			ds=60*dm+f-c;
		}
		else{
			ds=60*dm-(c-f);
		}
		printf("%d\n",ds);
		scanf("%d %d %d %d %d %d",&a,&b,&c,&d,&e,&f);
	}
	return 0;
}
