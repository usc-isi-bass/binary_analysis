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
  int a[5][5],m=0,p,q,r=1,w=0;
  for(int i=0;i<5;i++)
    for(int j=0;j<5;j++)
      cin>>a[i][j];
  for(int i=0;i<5;i++)
    {  
       m=0;
    for(int j=0;j<5;j++)
       {
        if(a[i][j]>m)
         {
          m=a[i][j];
         p=i;
         q=j;
         }
         }
        r=1;
      for(int k=0;k<5;k++)
        if(m>a[k][q])
          {
           r=0;
           break;
           }
        if(r==1)
        {
         cout<<p+1<<" "<<q+1<<" "<<m<<endl;
         w++;
         }
          
     }
     if(w==0)cout<<"not found"<<endl;
  
  return 0;
          
}