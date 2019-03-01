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
    int n,i,m,save[20000],count=0;
    for(i=0;i<20000;i++)
    save[i]=0;
    cin>>n; 
    while(n--)
    {
              int flag=1;
              cin>>m;
              for(i=0;i<20000;i++)
              {if(save[i]==m) {flag=0;break;}
              }
              if(flag==1) 
              {
                          for(i=0;i<20000;i++)
                          {if(save[i]==0){save[i]=m;break;}}
                          count++;
                          }
                          }
                          for(i=0;i<count-1;i++)
                          cout<<save[i]<<" ";
                          cout<<save[count-1];
                          
                          return 0;
                          }
              
    
 
