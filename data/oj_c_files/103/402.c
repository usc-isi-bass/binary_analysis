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
    char a[1000],b[1000][1];
    int number[1000]={0},i,j,k=0,len;
    cin>>a;
    len=strlen(a);
    for(i=0;i<len;i++)                              //????????????
    {
        if(a[i]>=97) a[i]=a[i]-32;
    }

    //cout<<a;

    k=0;
    b[k][0]=a[0];number[k]=1;
    for(i=1;i<len;i++)                              //????
    {
        if(a[i]==b[k][0])
         {
             number[k]=number[k]+1;  //cout<<number[k]<<' ';
         }
        else
        {
            number[k+1]=1;b[k+1][0]=a[i];k=k+1;
        }
    }

    for(j=0;j<k+1;j++)
    {
        cout<<'('<<b[j][0]<<','<<number[j]<<')';
    }


   return 0;
}