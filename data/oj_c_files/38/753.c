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

int main (){
int a;
int i;
int b,j;
double sum=0;
double l=0;
double sz[100];
double s,k;
scanf("%d",&a);
for(i=0;i<a;i++){
scanf("%d",&b);
for(j=0;j<b;j++){
scanf("%lf",&(sz[j]));}
for(j=0;j<b;j++){
sum+=sz[j];}
k=sum/b;
for(j=0;j<b;j++){
l+=(sz[j]-k)*(sz[j]-k);}
s=sqrt(l/b);

	printf("%.5lf\n",s);
sum=0;
l=0;}
return 0;}