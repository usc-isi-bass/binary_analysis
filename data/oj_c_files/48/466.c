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
    int i,j,k,n,m,a[12][12]={0},b[12][12]={0};   // b????????? 
    cin>>m>>n;                 //???? 
    for (j=1;j<=9;j++)
        {
            for (k=1;k<=9;k++)
            {
                b[j][k]=0;               //??b 
            }
        }  
    b[5][5]=m;                //???? 
    for (i=0;i<n;i++)
    {
        for (j=1;j<=9;j++)
        {
            for (k=1;k<=9;k++)
            {
                a[j][k]=b[j][k];             //a????b??? 
            }
        }      
        for (j=1;j<=9;j++)
        {
            for (k=1;k<=9;k++)                      //??????a???????????b? 
            {
                b[j-1][k-1] +=a[j][k];
                b[j-1][k] +=a[j][k];
                b[j-1][k+1] +=a[j][k];
                b[j][k-1] +=a[j][k];
                b[j][k] +=a[j][k];
                b[j][k+1] +=a[j][k];
                b[j+1][k-1] +=a[j][k];
                b[j+1][k] +=a[j][k];
                b[j+1][k+1] +=a[j][k];
            }
        }
    }
    for (j=1;j<=9;j++)               //??????????? 
    {
        for (k=1;k<=9;k++)
        {
            cout<<b[j][k];
            if (k!=9) cout<<" ";            
        }
        cout<<endl;
    }
    return 0;
}
