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
int ss[1000];
int zz[1000];
int n,k,num,i;
scanf("%d %d",&n,&k);
for(i=0;i<n;i++)
{
scanf("%d",&num);
ss[i]=num;zz[i]=num;
}
int sz[1000][1000];
int h,l;
for(h=0;h<n;h++){
for(l=0;l<n;l++){
sz[h][l]=ss[h]+zz[l];
if(sz[h][l]==k&&h!=l)
{printf("yes");break;}
else if(h==n-1&&l==n-1)
{printf("no");break;}
}

if(sz[h][l]==k&&h!=l)
{break;}

else if(h==n-1&&l==n-1)
{break;}
}
return 0;
}