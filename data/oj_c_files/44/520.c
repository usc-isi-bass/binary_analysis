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

int mi(int s)
{
    int sum=1,i;
    for(i=1;i<=s;i++)
       sum=sum*10;
    return sum;
}
int reserve(int n)
{
    int a[100]={0},i,j;
    for(i=0;;i++)
    {
        a[i]=n%10;
        n=n/10;
        if(n==0)    break;
    }
    for(j=0;i>=0;i--)
     {
        n=n+a[i]*mi(j);
        j++;
    }
    return n;
}
int main()
{
    int i,num;
    for(i=1;i<=6;i++)
    {
        cin>>num;
        cout<<reserve(num)<<endl;
    }
  
    return 0;
}
