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
    int n=0,length,x[102],b[102],i,j,l[100]={0};
    char c,str[102],nan;
    c=getchar();
    nan=c;
    while (c!='\n')
    {
          if (c==nan) x[n]=1;
          else
          {
              x[n]=2;
              l[n]=1;
          }
          n++;
          c=getchar();
    }
    length=n;
    while (n!=0)
    {
          for(i=0;i<length;i++)
          {
                               if(x[i]==1)
                               {
                                          j=i;
                                          i++;
                                          while(x[i]==0) i++;
                                          if (x[i]==1) 
                                          {
                                                       i--;
                                                       continue;
                                          }
                                          b[i]=j;
                                          x[j]=x[i]=0;
                                          n=n-2;
                               }
          }
    }
    for(i=0;i<length;i++)
    {
                         if(l[i]==1)
                         {
                                    cout<<b[i]<<' '<<i;
                                    if (b[i]!=0) cout<<endl;
                         }
    } 
    return 0;
}
