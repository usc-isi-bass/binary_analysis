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
	int m,n,i,j;
double s;
scanf("%d",&m);
for(i=1;i<=m;i++){
scanf("%d",&n);
double*x=(double*)malloc(sizeof(double)*n);
double*y=(double*)malloc(sizeof(double)*n);
x[0]=2;
x[1]=3;
y[0]=1;
y[1]=2;
if(n==1){
	s=2;
}
else if(n==2){
	s=3.5;
}else{
	s=3.5;
for(j=2;j<n;j++){
x[j]=x[j-1]+x[j-2];
y[j]=y[j-1]+y[j-2];
	s+=x[j]/y[j];
}
}
printf("%.3lf\n",s);
}
return 0;
}