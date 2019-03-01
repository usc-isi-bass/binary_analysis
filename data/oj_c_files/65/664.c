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

int main ()
{
int i,n,p,q;
int a[200],b[200];
scanf("%d\n",&n);
p=0;
q=0;
for(i=0;i<n;i++){
scanf("%d%d\n",&a[i],&b[i]);
if(a[i]==b[i]+1){
q=q+1;}else if(a[i]==b[i]+2){
p=p+1;}else if(a[i]==b[i]-1){
p=p+1;}else if(a[i]==b[i]-2){
q=q+1;}
}
if(p>q){
printf("A");}
else if(p==q){
printf("Tie");}
else if(p<q){
printf("B");}
return 0;
}