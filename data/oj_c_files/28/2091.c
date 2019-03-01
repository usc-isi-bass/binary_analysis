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
 char a[100000];
 int i=-1,j,k=0,b[100000];
 gets(a);
 while(1){
   j=0;
   for(i++;((a[i]!=' ')&&(a[i]!='\0'));i++){
     j++;
  }
   b[k]=j;
   k++;
   if(a[i]=='\0'){
   break;
  }else if(a[i+1]==' '){
   while(1){
   i++;
   if(a[i+1]!=' '){
     break;
     }
    }
  }
 }
 for(i=0;i<k-1;i++){
   printf("%d,",b[i]);
 }
 printf("%d",b[k-1]);
 return 0;
}
