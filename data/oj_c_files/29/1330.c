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

double sum(int n);
int main(){
  int m,i;
  int sz[100];
  double result=0;
  scanf("%d",&m);
  for(i=1;i<=m;i++){
    scanf("%d",&sz[i]);}
  for(i=1;i<=m;i++){
    result=sum(sz[i]);
    printf("%.3lf\n",result);}
  return 0;
}

double sum(int n){
  int i;
  double a,b,c,d=0,r;
  a=1;
  b=2;
  for(i=1;i<=n;i++){
    r=b/a;
	c=a;
    a=b;
	b=c+a;
	d=d+r;



  }
  return d;

}