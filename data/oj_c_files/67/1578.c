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
double a[100],c[100],d[100],h;
int n,i;
scanf("%d",&n);
for(i=0;i<n;i++){
scanf("%lf %lf",&a[i],&c[i]);
}
for(i=0;i<n;i++){
d[i]=c[i]/a[i];
}
for(i=1;i<n;i++){
h=d[i]-d[0];
if(h>0.05){printf("better\n");}
else if(h<-0.05){printf("worse\n");}else{printf("same\n");}


}



return 0;
}