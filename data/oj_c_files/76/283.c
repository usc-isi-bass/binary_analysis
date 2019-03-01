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
    int a[50000], b[50000], n, s[50000];
    
    scanf("%d\n", &n);
    for(int i=0;i<n;i++){
        scanf("%d %d", &a[i], &b[i]);
    }
int c=a[0];
int d=b[0];
for(int i=0;i<n;i++){
  if(c>a[i]){
     c=a[i];
     }
  if(d<b[i]){
     d=b[i];
     }
for(int m=c;m<=d;m++){
   s[m]=1;
   for(int i=0;i<n;i++){
       if(m>=a[i]&&m<b[i]){
          s[m]=0;
          }
    }
 }
}
int result=0;
for(int m=c;m<d;m++){
    result+=s[m];
}
if(result==0){
printf("%d %d",c,d);
}else{
printf("no");
}
return 0;
}

   
