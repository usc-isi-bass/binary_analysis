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
    cin>>n;
    int i,j,k;
    for(i=3;i<=n/2;i=i+2)
       {
           for(j=2;j<=i;j++)
             {
                 if(i%j==0)  {break;}
             }
             if(j==i)//????????i???
               {
                   for(k=2;k<=n-i;k++)
                      {
                        if((n-i)%k==0)  {break;}
                      }
                    if(k==n-i)//???n-i???
                        {
                            cout<<i<<" "<<n-i<<endl;
                        }
               }
       }
       return 0;
}
