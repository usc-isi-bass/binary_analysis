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
int i,a;
double d;
scanf("%d",&a);
d=1;
if(a==0){
d=1;
}
if(a!=0){
for(i=1;i<=a;i++){
d=d*2;
}
}
printf("%.0lf",d);
}