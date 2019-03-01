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
int n,m,i,j,a[20],s,t;
scanf("%d",&n);
for(i=0;i<n;i++){
s=60;
scanf("%d",&m);
if(m!=0){
for(j=0;j<m;j++) scanf("%d",&a[j]);
for(j=0;j<m;j++){
t=a[j]+3*j+3;
if(t>62) break;
else if(t==62){s-=1;break;}
else if(t==61){s-=2;break;}
else s-=3;}}
printf("%d\n",s);}
return 1;}