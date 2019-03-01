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
int n,i,j,k,t,num;
int a[500];
cin>>n;
i=1;j=1;
for(i=1;i<=n;i++)
   {cin>>num;
   if(num%2!=0)
   {a[j]=num;
   j++;}
  }                                                                         //????????????????a??? 
for(i=1;i<=j-1;i++)
   for(k=1;k<=j-1-i;k++)
      if(a[k]>a[k+1])
         {t=a[k];
         a[k]=a[k+1];
         a[k+1]=t;
        }                                                                  //????? 
for(i=1;i<=j-2;i++)
     cout<<a[i]<<',';
cout<<a[j-1]<<endl;                                                        //??????????????????? 
return 0;
}