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


int f(int m,int n,int k,int t)
{
    if(((m%n)==k) && ( t!=1))
    {
    return f((m-k)*(n-1)/n,n,k,t-1);}
    if(((m%n)!=k)||(m<n))
    {
    return 0;}
    if((t==1)&&(m%n)==k&&(m>=n))
    {
    return 1;}



}


int main()
{
    int n,k;
    cin>>n>>k;
    int i;
    int t;
    t=n;

    for(i=2;;i++)
    {
        if(f(i,n,k,t)==1)
        {
            cout<<i;
            break;
        }
    }
    return 0;
}