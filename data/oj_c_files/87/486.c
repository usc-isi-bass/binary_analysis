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

int main() {
int a,b,c,d,e,f,x,y,z,sum;
while(1){
scanf("%d%d%d%d%d%d",&a,&b,&c,&d,&e,&f);
if(a<1) break;
x=3600*(12-a+d);
y=60*e+f;
z=60*b+c;
sum=x+y-z;
printf("%d\n",sum);}
return 0;
}