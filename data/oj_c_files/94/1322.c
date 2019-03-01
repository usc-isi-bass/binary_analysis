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
    int N,a[500],t,i,b[500],p;
    scanf("%d",&N);
    for(i=0;i<N;i++){
    scanf("%d ",&a[i]);
}
for(i=0;i<N;i++){
if(a[i]%2==1){
b[i]=a[i];}
else{b[i]=0;}}
for(i=0;i<N;i++){
for(p=0;p<N-i;p++){
if(b[p]>b[p+1]){
t=b[p+1];
b[p+1]=b[p];
b[p]=t;}}}
for(i=0;i<N;i++){
if(b[i]>0){
printf("%d,",b[i]);}}
printf("%d",b[N]);
return 0;
}