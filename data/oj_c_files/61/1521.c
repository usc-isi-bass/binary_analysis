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

int F(int n){
int a,b,i,s;
if(n==1){s=1;}
else if(n==2){s=1;}
else {
      a=1;
      b=1;
	  for(i=3;i<=n;i++){
      s=a+b;
	  a=b;
	  b=s;}}
return s;
}
int main(){
int a[10000],i,n;
scanf("%d",&n);
for(i=1;i<=n;i++){
    scanf("%d",&a[i]);}
for(i=1;i<=n;i++){
    printf("%d\n",F(a[i])); }
return 0;
}