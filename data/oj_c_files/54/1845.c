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

int k,n;

int f(int n,int m);
int main()
{
    cin>>n>>k;
    for(int i=1;;i++)
    {
        int sum=f(n,i*n+k);
        if(sum)  {  cout<<sum;    break; }
    }
    
    
    return 0;
}

int f(int a,int m)
{
    if(a==1)return m;
    if(m%(n-1)!=0)  return 0;
    else return f(a-1,m*n/(n-1)+k);
}