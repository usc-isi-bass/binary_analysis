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
 int n,i,m,s,k;
 scanf("%d",&n);
 for(i=0;i<n;i++)
{
     scanf("%d",&m);
     if(m==0)
      {
         s=60;
         printf("%d\n",s);
         continue;
       }
        int*a=(int*)malloc(sizeof(int)*m);
    for(k=0;k<m;k++)
    {
       scanf("%d",&a[k]);
     }
    for(k=0;k<m;k++){
         if(a[k]+3*k<=60&&a[k]+3*(k+1)>=60){
          s=a[k];
          printf("%d\n",s);
          break;
                                            }
                 }
    if(a[0]>60){
       s=60;
       printf("%d\n",s);
       continue;
               }
   if(a[m-1]+3*m<60){
       s=60-3*m;
       printf("%d\n",s);
      continue;
                   }
for(k=0;k<m;k++){
   if(a[k]+3*(k+1)<60&&a[k+1]+3*(k+1)>60){
        s=60-3*(k+1);
        printf("%d\n",s);
       continue;
                                         }
                }           
          free(a);
                                          }
 return 0;
   }
