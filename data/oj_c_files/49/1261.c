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
   char a[500];
   cin.getline(a,500,'\n');
   int b=strlen(a);
   int wide=2;
   while(1)
   {
   for(int i=0;i<b-1;i++)
     {
       if(a[i]==a[i+1])
         {
           if(i+1-i+1==wide)
            cout<<a[i]<<a[i+1]<<endl;
            int m=i,n=i+1;
            while(1)
            {
               m--;
               n++;
               if(a[m]==a[n])
                {
                  if(n-m+1==wide)
                  for(int k=m;k<=n;k++)
                    cout<<a[k];
                  cout<<endl;
                }
               else
                break;
             }
          }
      }
    wide+=2;
    if(wide==b+2)
    break;
  }

 return 0;
 }
