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
  int a;
  scanf("%d\n",&a);
  int temp,i=0,x[a],b,de;
  b=a-1;
  for(i=0;i<a;i++)
  {
   scanf("%d\n",&x[i]);
   if(x[0]<x[i]&&i<a){
    temp=x[0];
    x[0]=x[i];
    x[i]=temp;
    }
   }
  for(i=1;i<a;i++){
   if(x[1]<x[i]){
      de=x[1];
      x[1]=x[i];
      x[i]=de;
      } 
  } 
  printf("%d\n%d\n",x[0],x[1]);
  return 0;
}
  
  
  