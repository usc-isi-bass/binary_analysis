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
int m,i,n,j,t;
int p=2,q=1;
double sum=0.000;
scanf("%d",&m);
for(i=1;i<=m;i++){
scanf("%d",&n);
for(j=1;j<=n;j++){
sum+=p*1.000/q;
t=q;
q=p;
p=q+t;
if(j==n){
	continue;
}
}
printf("%.3lf\n",sum);
sum=0.000;
p=2;
q=1;
}
return 0;
}