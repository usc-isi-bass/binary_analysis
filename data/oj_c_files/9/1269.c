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
 int n;
 scanf("%d",&n);
 struct xinxi{
  char id[10];
  int year;
 }xinxi[100],b[100],p;
 
 int i,j,k,a=0,c=0;
 
 for(i=0;i<n;i++){
   scanf("%s %d",xinxi[i].id,&(xinxi[i].year)); 
 }
 
 for(i=0;i<n;i++){
   if((xinxi[i].year)>=60){
   b[a]=xinxi[i];
   a++;
   }
 }
 
  for(k=1;k<a;k++){ 
    for(j=0;j<a-k;j++){
     if(b[j].year<b[j+1].year){
      p=b[j+1];
      b[j+1]=b[j];
      b[j]=p;
     }
    }    
   }
 for(j=0;j<a;j++){
   printf("%s\n",b[j].id);
 }
 for(i=0;i<n;i++){
  if((xinxi[i].year)<60){
   printf("%s\n",xinxi[i].id);  
  }
 }
  return 0;
 }