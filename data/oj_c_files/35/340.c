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
    int m,n,h,l,i,j,k;
    int count=0;
    int count2=0;
    scanf("%d,%d",&m,&n);
    int a[8][8];
    int max[8];
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
             scanf("%d",&a[i][j]);
         }
     }
     for(i=0;i<m;i++)
     {
         max[i]=a[i][0];
         for(j=0;j<n;j++)
         {
              if(a[i][j]>=max[i])
              {
                   max[i]=a[i][j];
                   h=i;
                   l=j;
               }
          }
          for(k=0;k<m;k++)
          {
               if(a[k][l]<max[i])
               {
                    count++;
                }
           }
           if(count==0)
           {
                printf("%d+%d",h,l);
                break;
            }
           else
           {
                count2++;
           }
       }
     if(count2==m)
     {
         printf("No");
     }
    return 0;
 }