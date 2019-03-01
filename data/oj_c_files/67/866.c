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
int n;
scanf("%d",&n);
int i,j,l,m,a[99],z[99];
float q,w;
n=n-1;
scanf("%d%d",&l,&m);
q=1.0*m/l;
for(i=0;i<n;i++){
scanf("%d%d",&l,&m);
w=1.0*m/l;
if(w>=q+0.05){
printf("better\n");}
else if(w<=q-0.05){
printf("worse\n");}
else{
printf("same\n");}

}
return 0;} 

