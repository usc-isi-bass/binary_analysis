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

int main()
{
int n,i,m,k,a,s;
scanf("%d",&n);
for(i=0;i<n;i++){
scanf("%d",&m);
for(k=1;k<=m;k++){
scanf("%d",&a);
if((a+k*3)<=60){
s=a+(60-a-3*k);}
if((a+k*3)>60 && (a+k*3)<=63){
s=a;}
}
if(m==0)
s=60;
printf("%d\n",s);}
return 0;
}


