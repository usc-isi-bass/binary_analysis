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
    int N=0,i=0,k=0,j=0;//N?????N  k????? i j??????? 
    cin>>N;
    int s[N];
     for(i=0;i<=N-1;i++)
     {
     cin>>s[i];                   
     }
     for(i=0;i<=N-1;i++)
     {
       if(s[i]%2!=0)
       {s[k]=s[i];k++;}
                      
     }
        for(i=0;i<=k;i++)
        {
             for(j=i;j<=k-i-1;j++)
             {
                 if(s[j-1]>s[j])
                 {
                 s[j-1]=s[j-1]^s[j];
                 s[j]=s[j]^s[j-1];
                 s[j-1]=s[j-1]^s[j];              
                 }                   
             }                   
        }
for(i=0;i<=k-1;i++)
{
if(i==0)
cout<<s[i];
if(i!=0)
cout<<","<<s[i];                   
}
   
return 0;    
}