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

int main (){
    int a,b,c,d,e,f,x,y,r;
    a=1;
    while (a!=0){
            scanf ("%d%d%d",&a,&b,&c);
            scanf ("%d%d%d",&d,&e,&f);
        	x=a*3600+b*60+c;
        	y=12*3600+d*3600+e*60+f;
        	r=y-x;
            if (a!=0){
        	printf ("%d\n",r);
            }
    }
	return 0;
}

