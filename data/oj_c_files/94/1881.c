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
int n,i,k,e;
int a[500];
char x=',';
scanf("%d",&n);
for(i=0;i<n;i++)
scanf("%d ",&a[i]);
for(k=1;k<=n;k++){
for(i=0;i<n-k;i++){
if(a[i]>a[i+1]){
e=a[i+1];
a[i+1]=a[i];
a[i]=e;
}}}
for(i=0;i<n-1;i++){
if((a[i]%2==1)&&(i<n-2)){
printf("%d%c",a[i],x);}
else if((a[i]%2==1)&&(i=n-1))
 printf("%d",a[i-1]); 

}


return 0;
}
