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
int k,n,i,m,x,y,z,c;
c=0;
scanf("%d",&n);
scanf("%d",&k);
int a[n];
for(i=0;i<n;i++){
scanf("%d",&(a[i]));
}
for(i=0;i<n;i++){
for(x=0;x<n;x++){
if(x==i){
continue;
}
if(a[x]+a[i]==k){
c=1;
}
}
}
if(c==0)
{
printf("no");
}
else
{
printf("yes");
}
return 0;
}

