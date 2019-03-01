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
    int N,i,j,k,t,count=0;
    cin>>N;                     //????????N 
    int a[N];                   //????a[N] 
    for (i=0;i<N;i++)
        {
         cin>>a[i];
         if (a[i]%2!=0)
            count=count+1;      //????????? 
        }
    int b[count];               //??????b[count] 
    k=0;
    for (i=0;i<N;i++)
        {
         if (a[i]%2!=0)
            {
             b[k]=a[i];
             k++;               //?a[N]???????b[count] 
            }
        }
    for (j=1;j<count;j++)
        {
         for (k=0;k<count-j;k++)
             {
              if (b[k]>b[k+1])
                 {
                  t=b[k];
                  b[k]=b[k+1];
                  b[k+1]=t;     //“???”?b[count]???????? 
                 }
             }
        }
    for (k=0;k<count-1;k++)
        {
         cout<<b[k]<<",";
        }
    cout<<b[count-1]<<endl;     //???????? 
    return 0;
}
