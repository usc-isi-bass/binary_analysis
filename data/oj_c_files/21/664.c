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



double num[400];
double dis[400];

int main()
{
    int n;
    int i,j;
    double temp;
    double ave=0;
    const double min=1e-6;
    double max=0;
    
    cin>>n;
    for(i=0;i<n;i++)
        {
         cin>>num[i];
         ave+=num[i];
         }     
    ave=ave/n;
    for(i=n-2;i>=0;i--)
        for(j=0;j<=i;j++)
            if(num[j]>num[j+1])
               {
                temp=num[j];
                num[j]=num[j+1];
                num[j+1]=temp;                 
               }
       
    for(i=0;i<n;i++)    
        dis[i]=fabs(num[i]-ave);
    for(i=0;i<n;i++)
        if(max<dis[i])max=dis[i];
    for(j=n-1;j>=0;j--)
        if(fabs(max-dis[j])<min) break;
    for(i=0;i<j;i++)
        {if(fabs(max-dis[i])<min)cout<<num[i]<<",";}
    cout<<num[j];
    
   
    return 0;
}
