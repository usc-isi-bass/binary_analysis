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
         int s[100][100],n,i,j,result,a=-1,b=-1,c=-1,d=-1;
         scanf("%d",&n);
         for(i=0;i<n;i++)
         {
                   for(j=0;j<n;j++)
                            scanf("%d",&s[i][j]);
         }
 
         for(i=0;i<n;i++)
         {
                   for(j=0;j<n;j++)
                   {
                            if(s[i][j]==0)
                            {       
                                     a=i;
                                     b=j;
                                     break;
                            }                          
                   }       
                   if (a>=0) break;
         }
         for(i=n-1;i>=0;i--)
         {
                   for(j=n-1;j>=0;j--)
                   {
                            if(s[i][j]==0)
                            {
                                     c=i;
                                     d=j;
                                     break;
                            }                
                   }
                   if (c>=0) break;
         }
         result=(c-a-1)*(d-b-1);
         printf("%d",result);
         return 0;
}