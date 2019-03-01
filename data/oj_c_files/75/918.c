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
    int a[1000],b[1000];
    int t,i,c,n=0;
    char tc;
    do
    {
    scanf("%d%c",&t,&tc);
    a[n]=t; n++;
}while (tc!=10);

for(i=0;i<n;i++) scanf("%d,",&b[i]);
int max=0,maxp=0;
for(i=0;i<n;i++) if(b[i]>max) max=b[i];


for(t=1;t<max;t++) 
{c=0;
for(i=0;i<n;i++) {if((a[i]<=t)&&(b[i]>t)) c++;}
if (c>maxp) maxp=c;
}

printf("%d %d",n,maxp);

}   
