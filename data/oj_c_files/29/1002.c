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
double a;
int m,y,x[100],b,c,d;
x[0]=1;
x[1]=2;
for(y=2;y<100;y++){
   x[y]=x[y-1]+x[y-2];
}
scanf("%d",&m);
a=2;
for(b=0;b<m;b++){
    scanf("%d",&c);
	for(d=1;d<c;d++){
	a=a+1.0*(x[d-1]+x[d])/x[d];}
    printf("%.3lf\n",a);
	a=2;
}
return 0;
}