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
 int shuzu[300],i,j;
 
 for(i=0;i<n;i++){
  scanf("%d",&shuzu[i]);
 }
 
    int zhuanhuan[300];
 zhuanhuan[0]=shuzu[0];
 printf("%d",zhuanhuan[0]);
 
 int a=1;
 int b;
 
 
 for(i=1;i<n;i++){
  b=0;
  for(j=0;j<a;j++){
   if(shuzu[i]==zhuanhuan[j]){
    break;
   }else{
                b++;
    
   }
   if(b==a){
    zhuanhuan[a]=shuzu[i];
    printf(",%d",shuzu[i]);
    a++;
   }
  }
  
 }
 
 return 0;
}
