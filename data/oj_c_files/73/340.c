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
    int s[6][6]={0};                              //s[6][6]??????????????????????????????
    int i,j,w=0;
    for(i=0;i<=4;i++)               //???? 
    {
           for(j=0;j<=4;j++)
           {
               cin>>s[i][j];                 
           }                 
    } 
    for(i=0;i<=4;i++)           //???????? ??????? 
    {
          s[i][5]=s[i][0];
          for(j=1;j<=4;j++)
          {
             if(s[i][5]<s[i][j])
              s[i][5]=s[i][j];             
          }             
    }
    for(i=0;i<=4;i++)              //???????? 
    {
          s[5][i]=s[0][i];
          for(j=1;j<=4;j++)
          {
             if(s[5][i]>s[j][i])
              s[5][i]=s[j][i];             
          }                 
    }
    for(i=0;i<=4;i++)
    {
         for(j=0;j<=4;j++)
         {
             if((s[i][j]==s[i][5])&&(s[i][j]==s[5][j]))
             {cout<<i+1<<" "<<j+1<<" "<<s[i][j];w=1;}             
        }                 
    }
    
    if(w==0)
    cout<<"not found";
    
    
    
    
return 0;    
}
