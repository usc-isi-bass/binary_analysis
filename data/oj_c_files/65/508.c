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
 int n;
 scanf("%d",&n);
 int i,a[n],b[n];
 int m=0,j=0;
 for(i=0;i<n;i++){
  scanf("%d%d",&a[i],&b[i]);
  if(a[i]==b[i]){
  }else if(a[i]==b[i]-1||a[i]==b[i]+2){
   m++;
  }else{
   j++;
  }
 }
 if(m>j){
  printf("A");
 }else if(m==j){
  printf("Tie");
 }else{
  printf("B");
 }
return 0;
}