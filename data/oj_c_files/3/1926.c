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
int n,k,i,j,flag=0;
int a[1001];                                                                     //??a????n??? 
cin>>n>>k;
for(i=1;i<=n;i++)
   cin>>a[i];
for(i=1;i<=n-1;i++)
   {for(j=i+1;j<=n;j++)
      if(a[i]+a[j]==k)                                                               //???????????????????????k??? 
         {cout<<"yes"<<endl;
         flag=1;
         break;}
   if(a[i]+a[j]==k) 
      break;
   }
if(flag!=1)
   cout<<"no"<<endl;                                                              //???????no  
return 0;
}