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
int n,i,j,k,t,s,e,l,m=0;
scanf("%d",&n);
int a[50000],b[50000],c[10000];
for(i=0;i<n;i++){
scanf("%d%d",&a[i],&b[i]);}
for(i=0;i<n;i++){
for(j=a[i];j<b[i];j++){
c[j]=1;}
}
for(k=1;k<=n;k++){
for(i=0;i<n-k;i++){
if(a[i]>a[i+1]){
t=a[i+1];
a[i+1]=a[i];
a[i]=t;}
}}
for(k=1;k<=n;k++){
for(i=0;i<n-k;i++){
if(b[i]>b[i+1]){
t=b[i+1];
b[i+1]=b[i];
b[i]=b[i+1];
}}
}
s=a[0];
e=b[n-1];
l=e-s;
for(i=s;i<e;i++){
m=m+c[i];
}
if(l==m){
printf("%d %d",s,e);
}
else
printf("no");

}