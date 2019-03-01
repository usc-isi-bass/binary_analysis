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

int put(int a,int b);
int main()
{
    int m,n,t;
    cin>>t;
    while(t--)
    {
       cin>>m>>n;
       cout<<put(m,n)<<endl;
    }
    return 0;
}

int put(int a,int b)
{
    if((a<1)||(b<1))
    return 0;
    if((a==1)||(b==1))
    return 1;
    if(a<b)
    return put(a,a);
    if(a==b)
    return put(a,b-1)+1;
    if(a>b)
    return put(a,b-1)+put(a-b,b);
}   
    
    
