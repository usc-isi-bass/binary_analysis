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
    int n,a,m,p,q,k,l,s;
    scanf("%d",&n);
    if(n==10000) {a=1; printf("%05d",a);}
    else if(n>=1000)
    {s=n%1000;m=(n-s)/1000;l=s%100;p=(s-l)/100;q=l%10;
     k=(l-q)/10;a=q*1000+k*100+p*10+m;printf("%04d",a);}
    else if(n>=100)
    {s=n%100;m=(n-s)/100;l=s%10;p=(s-l)/10;
     a=l*100+p*10+m;printf("%03d",a);}
    else if(n>=10)
    {s=n%10;m=(n-s)/10;a=s*10+m;printf("%02d",a);}
    else printf("%d",n);
    return 0;
}