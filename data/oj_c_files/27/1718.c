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
 int n,j;
 double a[100],b[100],c[100],p,q,u,x1,x2;
 char r,s,t;
 r='i';
 s='+';
 t='-';
 scanf("%d",&n);
 for(j=0;j<n;j++){ 
  scanf("%lf %lf %lf",&a[j],&b[j],&c[j]);
p=(-b[j])/(2*a[j]);
q=b[j]*b[j]-4*a[j]*c[j];
if (p!=0)
{
if (q>0)
{x1=p+sqrt(q)/(2*a[j]);
x2=p-sqrt(q)/(2*a[j]);
printf("x1=%.5lf;x2=%.5lf\n",x1,x2); }
else if (q<0){
u=sqrt(-q)/(2*a[j]);
printf("x1=%.5lf%c%.5lf%c;x2=%.5lf%c%.5lf%c\n",p,s,u,r,p,t,u,r);}
else 
printf("x1=x2=%.5lf\n",p);
}
else
{p=(b[j])/(2*a[j]);
if (q>0)
{x1=p+sqrt(q)/(2*a[j]);
x2=p-sqrt(q)/(2*a[j]);
printf("x1=%.5lf;x2=%.5lf\n",x1,x2); }
else if (q<0){
u=sqrt(-q)/(2*a[j]);
printf("x1=%.5lf%c%.5lf%c;x2=%.5lf%c%.5lf%c\n",p,s,u,r,p,t,u,r);}
else 
printf("x1=x2=%.5lf\n",p);
}
 }
}