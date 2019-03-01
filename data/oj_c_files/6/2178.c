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
    int k=0,n=0,m=0,i=0,w=0,j=0,sum=0,s[101][101]={0};//k??????????n???????? 
    cin>>k;
    for(w=1;w<=k;w++)
    {
       sum=0;
       cin>>n>>m;
       for(i=1;i<=n;i++)
       {
          for(j=1;j<=m;j++)
          {
             cin>>*(s[i]+j);  
             if((i==1)||(i==n)||(j==1)||(j==m))   
             sum+=*(s[i]+j);            
          }                 
       }
       cout<<sum<<endl;                 
    }
return 0;    
}
