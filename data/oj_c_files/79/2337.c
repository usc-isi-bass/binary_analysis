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


long int num(int a,int b)
{
    long int i;
    if(a==1) i=1;
    if(a==2) 
    {
        if(b%2==0) i=1;
        else i=2;
    }
    if(a>2)
        i = (num(a-1,b)+b%a)%a;
    if(i==0) i=a;
    return i;
}
int main()
{
   int c;
   for(c=1;c!=0;)
   {
    long int n,m,k;
    scanf("%ld%ld",&n,&m);
    c=n;
    if(c==0) break;
    k=num(n,m);
    if(k==0)
       printf("%ld\n",n);
    else
       printf("%ld\n",k);
    }
    
}