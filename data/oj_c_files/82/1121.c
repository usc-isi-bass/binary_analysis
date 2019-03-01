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
  int n,i,sum,temp,m;
  sum=0;
  temp=0;
  int a[200];
  int b[200];
  scanf("%d",&n);
  for(i=0;i<n;i++){
    scanf("%d %d",&a[i],&b[i]);
  }
  for(i=0;i<n;i++){
    if (a[i]>=90&&a[i]<=140&&b[i]>=60&&b[i]<=90){
     m=1;
    }else {
     m=0;
    }
    if(m==0){
      if(temp>sum){
       sum=temp;
       }
       temp=0;
  }
  else {
   temp++;
  }
  }
    if(temp>sum){
     sum=temp;
    }
   printf("%d",sum);
  return 0;
}
