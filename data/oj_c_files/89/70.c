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
         int n;
         int x,y,t;
         cin>>n;
         int ans=0;
         int count[n];
         for(int i=0;i<n;i++)count[i]=0;
         while(cin>>x>>y)
         {
                  if(x==0 && y==0){break;}
                  else
                  {
                           count[y]++;
                  }
         }
         for(int i=0;i<n;i++)
         {
                                    if(count[i]==n-1){ans++;t=i;}
         }
         if(ans==1)cout<<t;
         else cout<<"NOT FOUND";
}
