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
int i=0,a[MAX],n,m=0,k=0,j=0;
scanf("%d",&n);
n=n-2;
while(i<=n)
{scanf("%d\n",&a[i]);
i=i+1;}
scanf("%d",&a[i]);
i=0;
n=n+1;
while(i<=n){
if (m<=a[i])
{m=a[i];}

i=i+1;}
j=0;
while(j<=n){
if (k<=a[j] && a[j]!=m)
{k=a[j];}

j=j+1;}

printf("%d\n",m);
printf("%d\n",k);

    return 0;              
}