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
    int n,i,j,k;            
    cin>>n;                //??????n 
    int a[n];             
    for(i=0;i<n;i++)        //????a[n] 
    cin>>a[i];
    cin>>k;                 //????????k 
    for(i=0;i<n;i++)        //????????????????????a[i]?????k 
    {
        if(a[i]==k)         //???i????k 
        {
            n=n-1;           //??????????? 
            for(j=i;j<n;j++)  //???? 
            {
                a[j]=a[j+1];
            }
            i=i-1;           //i-1,????i++????i???????????????????????i?????? 
        }
    }
    for(i=0;i<n-1;i++)       //???n-1????? 
    cout<<a[i]<<' ';
    if(a[i]!=k)              //???n?????k????? 
    cout<<a[i];
    return 0;
}