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
double a,b;
double sum[100]={0};
a=2;
b=1;
int n;
int j;
int e;
int m;
scanf("%d",&n);
int k;
for(k=0;k<n;k++){
scanf("%d",&m);
for(j=0;j<m;j++){
sum[k]+=a/b;
e=b;
b=a;
a=e+a;}
a=2;
b=1;

printf("%.3lf\n",sum[k]);
}
return 0;
}
