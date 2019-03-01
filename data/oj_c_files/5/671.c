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
 int i,q=0;
 double n,A,B,p=0.0;
 char a[500],b[500];
 scanf("%lf",&n);
 char c=getchar();
 gets(a);
 gets(b);
 A=strlen(a);
 B=strlen(b);
if(A!=B){
  printf("error");
 }
 if(A==B){
  for(i=0;i<A;i++){
   if((a[i]!='A'&&a[i]!='T'&&a[i]!='C'&&a[i]!='G')||(b[i]!='A'&&b[i]!='T'&&b[i]!='C'&&b[i]!='G')){
    q=1;
    printf("error");
    break;
   }
  }
        if(q==0){
   for(i=0;i<A;i++){
       if(a[i]==b[i]){
        p+=1.0;
    }
   }
   if((p/A)>n){
    printf("yes");
            }else{
    printf("no");
   }
  }
 }

 return 0;
}