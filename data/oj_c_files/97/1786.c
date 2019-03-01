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
int n,a,b,c,d,e,f,x,y,z,i,q;
scanf("%d",&n);
a=n/100;
x=n%100;
b=x/50;
y=n%50;
c=y/20;
z=n-100*a-50*b-20*c;
d=z/10;
i=n%10;
e=i/5;
q=n%5;
f=q;
printf("%d\n%d\n%d\n%d\n%d\n%d\n",a,b,c,d,e,f);
return 0;
}