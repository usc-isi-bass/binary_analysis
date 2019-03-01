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

//????????????????????????
int main()
{
    int m,n;
    int a[11][11];//a????????
    int b[11][11];//b????????
    int i,j,k,p,q;
    for(i=0;i<11;i++)//???????
       for(j=0;j<11;j++)
         a[i][j]=0;
    for(i=0;i<11;i++)
       for(j=0;j<11;j++)
         b[i][j]=0;
    cin>>m>>n;
    a[5][5]=m;//???????m
    for(k=1;k<=n;k++)//???n?
    {
        for(i=1;i<=9;i++)//????????
           for(j=1;j<=9;j++)
              {
                  for(p=i-1;p<=i+1;p++)
                     for(q=j-1;q<=j+1;q++)
                         b[i][j]+=a[p][q];
                  b[i][j]+=a[i][j];
              }
        for(i=1;i<=9;i++)//???????????????????
           for(j=1;j<=9;j++)
              {
                  a[i][j]=b[i][j];
                  b[i][j]=0;
              }
    }
    for(i=1;i<=9;i++)//??n??????
       {
           for(j=1;j<9;j++)
               cout<<a[i][j]<<' ';
            cout<<a[i][9]<<endl;
       }


    return 0;
}
