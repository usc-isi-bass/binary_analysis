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
while(1){
  int a[16];int i=0,n=0,k;
 while(1){
 scanf("%d ",&a[i]);
 if(a[i]==0)break;
 if(a[i]==-1)return 0;
 i++;}
for(i=0;a[i]!=0;i++)
 for(k=0;a[k]!=0;k++)
 {
     if(a[k]==2*a[i]) n++;
 }

 printf("%d\n",n);}}
