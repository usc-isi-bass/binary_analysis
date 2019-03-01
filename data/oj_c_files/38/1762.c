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
  int k,n,i,j,b=0;
  double s[1000],a,S,sum,SS,aa[1000];
  scanf("%d",&k);
  for(i=0;i<k;i++){
  scanf("%d",&n);
    sum=0;SS=0;
    for(j=0;j<n;j++){
    scanf("%lf",&s[j]);
    sum+=s[j]; 
 }
  a=sum/n;
  for(j=0;j<n;j++){
  SS+=(s[j]-a)*(s[j]-a);
} 
  S=sqrt(SS/n);
  aa[b]=S;
  b++;
  } 
 for(int h=0;h<b;h++){
 printf("%.5lf\n",aa[h]);}
return 0;
}



