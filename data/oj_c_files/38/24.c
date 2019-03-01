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
 int n,i,j;
 double a[100],sum,jun,s,m;
 double *p=a;
 scanf("%d",&n);
 for(j=0;j<n;j++){
 scanf("%lf",&m);
 for(i=0;i<m;i++){
 scanf("%lf",p+i);
 }
 sum=0;
 for(i=0;i<m;i++){
 sum=sum+*(p+i);
 }
 jun=sum/m;
 sum=0;
 for(i=0;i<m;i++){
 sum=sum+(*(p+i)-jun)*(*(p+i)-jun);
 }
 s=sum/m;
 s=sqrt(s);
 printf("%.5lf\n",s);
 }
return 0;
}
