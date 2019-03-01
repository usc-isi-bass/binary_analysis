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
int a,n,i,e,j=0;
scanf("%d",&n);j=n;
int sz[500];
for(i=0;i<n;i++)
{
scanf("%d",&sz[i]);
}
for(i=0;i<n;i++)
{
if(sz[i]%2==0)
{
sz[i]=0;j=j-1;
}
}
for(a=1;a<=n;a++)
{
for(i=0;i<n-a;i++)
{
if(sz[i]>sz[i+1]){
e=sz[i+1];
sz[i+1]=sz[i];
sz[i]=e;}
}
}
for(i=n-j;i<n-1;i++)
{

printf("%d,",sz[i]);
}
printf("%d",sz[n-1]);
return 0;
}