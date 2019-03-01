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
int n,k,i; 
int a[1000]; 
int b[1000]; 
scanf("%d%d",&n,&k); 
for(i=0;i<n;i++){ 
scanf("%d",&a[i]); 
} 
int p=0,s=0,d=0; 
for(i=0;i<n;i++){ 
b[p]=a[i]; p++; 
} 
for(p=0;p<n;p++){ 
for(i=0;i<n;i++){ 
if(b[p]+a[i]==k){ 
s++; 
if(p==i){ 
d++; 
} 
} 
} 
} 
if((s-d)!=0){
printf("yes");
} 
else{
printf("no"); 
} 
return 0; 
}
