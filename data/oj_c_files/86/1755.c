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
    int n,m,a[10]={0},i,j,k,count=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {               
                    memset(a,0,sizeof(a));
                    scanf("%d",&m); 
                    for(j=0;j<m;j++)
                    scanf("%d",&a[j]);
                    if(m==0)printf("60\n");
                    else 
                    {
                    for(j=0;j<m;j++)
                         {
                                   if(a[j]+3*(j+1)<60)
                                   {
                                       count=60-3*(j+1);
                                       
                                   }     
                                   else break;
                         }
                         if((a[j]+3*j>=57) && (a[j]+3*j<60))
                         count=a[j];
                         printf("%d\n",count);
                    }
    }
                    return 0;
} 
                                    