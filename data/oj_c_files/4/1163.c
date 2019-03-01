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
   int m,n;
   cin>>m>>n;
   int a[m][n];
   
   for(int i=0;i<m;i++)
     for(int j=0;j<n;j++)
       cin>>a[i][j];
   int (*p)[n]=a;
   int sum=0;
   while(1)
   {
    if(sum==m+n-1) break;
    else if(sum<=n-1)
      {
       for(int i=0;i<=sum;i++)
         {
          if(i>m-1) break;
          cout<<*(*(p+i)+sum-i)<<endl;
          }
         sum++;
       }
    else
      {
       for(int i=sum+1-n;i<=sum;i++)
         {
          if(i>m-1) break;
          cout<<*(*(p+i)+sum-i)<<endl;
         }
       sum++;
       }
    }
 
 

 return 0;
 }
