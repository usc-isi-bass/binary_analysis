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

void pd(int a[],int k)
{
int i,j;
for(i=0;i<k;i++){
for(j=i+1;j<k;j++){
if(a[i]==a[j]) a[j]=0;}}
printf("%d",a[0]);
for(i=1;i<k;i++){
if(a[i]) printf(",%d",a[i]);}
}
int main(void)
{
int a[300],k,n;
scanf("%d",&k);
for(n=0;n<k;n++)
scanf("%d",&a[n]);
for(n=0;n<k;n++)
printf("");
pd(a,k);
return 0;
}
