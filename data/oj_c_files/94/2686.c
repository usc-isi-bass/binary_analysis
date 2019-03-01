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
int N,i,k,e,p;
k=0;
scanf("%d",&N);
int a[500],b[500];
for(i=0;i<N;i++){
scanf("%d",&(a[i]));
if(a[i]%2!=0){
b[k]=a[i];
k++;}}
for(i=0;i<k;i++){
for(p=0;p<k-i;p++){
if(b[p]>b[p+1]){
e=b[p];
b[p]=b[p+1];
b[p+1]=e;}}}
for(i=1;i<k;i++){
printf("%d,",b[i]);}
printf("%d",b[k]);
return 0;
}


