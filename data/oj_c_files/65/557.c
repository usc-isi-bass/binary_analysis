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
int n,a[120],b[120];
int r=0,t=0,i;
scanf("%d",&n);
for(i=0;i<n;i++){
scanf("%d %d",&a[i],&b[i]);   
if((a[i]==0&&b[i]==1)||(a[i]==1&&b[i]==2)||(a[i]==2&&b[i]==0)){
       t+=1;}
else if((a[i]==0&&b[i]==2)||(a[i]==1&&b[i]==0)||(a[i]==2&&b[i]==1)){
     r+=1;}
else {
   t+=0;
   r+=0;}
  }
if(t>r){
printf("A");}
else if(r>t){
printf("B");}
else {
printf("Tie");}
return 0;
}
