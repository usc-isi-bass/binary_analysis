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
    int i,n,m,j,l,a,b,k,p;
    scanf("%d",&m);
    for (i=3;i<=m/2;i++)
    {
        k=sqrt(i);
     for(j=2;j<=k;j++)  //??i?????
     
     if(i%j==0) break;
     
     if(j>=k+1){   p=sqrt(m-i);
                   for(l=2;l<=p;l++)                  //???m-i????? 
                   if((m-i)%l==0) break;
                   if(l>=p+1)printf("%d %d\n",i,m-i)  ;
               }
                
      }
            }