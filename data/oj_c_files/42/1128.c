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

int main ()
{
    int n,j,i,k;
    int a[100000];
    cin >>n;
    for (i=0;i<n;i++)    
    {
        cin >>a[i];
    }
    cin >>k;
    j=0;
    for (i=0;i<n;i++)
    {
        if(a[i]!=k)
        j++;
    }
    if (j==1)
    {
        for (i=0;i<n;i++)
        {
           if (a[i]!=k)
           {cout<<a[i] <<endl;
           break;
           }       
        }         
    }
    else
    {
    for(i=0;i<n;i++)
    {
        if(a[i]!=k)
        {cout <<a[i]<<' ';
        j--;
        }
        if (j==1) break;
        
    }
    for (i=n-1;i>=0;i--)
    {
        if (a[i]!=k)
        {cout <<a[i] <<endl;
        break;}    
    }
    }
    return(0);
}
