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
int m,i;
scanf("%d",&m);
double sz[m];
for(i=0;i<m;i++){
int n;
scanf("%d",&n);
int j;
double sum=0.0;
int a=2,b=1,e;
for(j=0;j<n;j++){
double t;
t=1.0*a/b;
sum+=t;
e=b;
b=a;
a=e+b;
}
printf("%.3lf\n",sum);
}
return 0;
}